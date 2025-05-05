#include<iostream>
using namespace std;
class base {
    public:
    void fun1(){};
    void fun2(){};
    void fun3(){};
};
    
class derived : public base{
    public:
    void fun4(){}
    void fun5(){};
    };
    
    int main (){
    
    base *ptr;
    ptr = new derived ();
    
    ptr->fun1();
    ptr->fun2();
    ptr->fun3();
    // ptr->fun4();  //this is not allowed.
    // ptr->fun5(); //this is not allowed.
    }    