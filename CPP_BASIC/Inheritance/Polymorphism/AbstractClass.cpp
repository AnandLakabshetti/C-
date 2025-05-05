#include<iostream>

using namespace std;
class base {
    public:
    virtual void fun1()=0;//with this class base becomes the abstract class.
    virtual void fun2()=0;//with this class base becomes the abstract class.
};
class derived:public base {
    public:
        void fun1(){
        cout <<"Derived fun1\n";
    }
    void fun2(){
        cout <<"Derived fun2\n";
    }
};
int main (){
derived d;
base *ptr = &d;

ptr->fun1();
ptr->fun2();
}
