#include<iostream>
using namespace std;

class car {
    public:
    //this function is virtual function, by this using base class pointer we can call the derived class function.
    virtual void start (){ cout<<"Car started\n";}
};
class swift : public car{
    public:
    void start (){ cout<<"Swift started\n";}
};
class innova : public car{
    public:
    void start (){ cout<<"Innova started\n";}
};

int main (){
car *ptr;
swift s;
innova i;
ptr=&s;
ptr->start();
ptr=&i;
ptr->start();
}

//This is an example of polymorphism, as by using base class pointers we can access the both derived class functions.
