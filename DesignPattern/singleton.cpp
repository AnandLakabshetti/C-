#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

class Logger{
    private:
    static int count;
    static  Logger *loggerinstance;
    static mutex mtx;
    Logger(){
        cout<<"Logger instance"<<" "<<++count<<endl;
    }
    public:
    void log (string msg);
    static Logger *  Getlogger();
};
mutex Logger::mtx;
int Logger::count=0;
Logger * Logger::loggerinstance=nullptr;

Logger* Logger::Getlogger(){
//to avoid issue of multiple instances in multithreading, use mutex.
//this is not every time required, it required only during the first time instance creation.
if (nullptr == loggerinstance){
   mtx.lock();
   if (loggerinstance == nullptr ){
    loggerinstance= new Logger();
   }
    mtx.unlock();
}
    return loggerinstance;
}
void Logger::log(string s){
    cout<<"msg: "<<s<<endl;
}
void userlog1(){
    Logger *l = Logger::Getlogger();
    l->log("l");
}
void userlog2(){
    Logger *l1 = Logger::Getlogger();
    l1->log("l1");
}
int main (){
//when we use two threads then still two instances of class getting created.
//to control this in multithreaded environment use mutex.
    thread t1(userlog1);
    thread t2(userlog2);

    t1.join();
    t2.join();

}