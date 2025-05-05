#include<iostream>
using namespace std;
class A {
    public:

    void fun1 (){
        std::cout<<"Fun1\n";
    }
   // inline void fun2();-> by writing this we make this function also inline.
void fun2();
};
    void A::fun2 (){
        std::cout<<"Fun2\n";
    }	

int main (){
A a;
a.fun1();
a.fun2();
}
