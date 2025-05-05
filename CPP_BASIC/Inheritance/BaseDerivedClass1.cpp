#include<iostream>
using namespace std;

class Base {
    public:
    void fun1(){
        cout<<"In base class Fun1\n";
    }
};
class Derived: public Base{
    public:
    void fun2(){
        cout<<"In base class Fun2\n";
    }
};

int main (){
Derived d;
d.fun1();//allowed
d.fun2();//allowed.

Base *ptr = &d;//allowed 
ptr->fun1(); // allowed
//ptr->fun2();//not allowed, pointer of base class can access derived class object but cannot call functions of derived class.

Base b;
// Derived *dptr = &b;//not allowed.
//derived class pointer cannot access the base class object but vice versa is allowed.
}
