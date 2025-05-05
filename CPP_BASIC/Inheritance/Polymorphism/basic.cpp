#include<iostream>
using namespace std;

class base {
    public:
    void display (){
        cout<<"Display of base \n";
    }
};
class derived: public base {
    public:
    void display (){
        cout<<"Display of derived \n";
    }   
};
/*
//for function overriding the prototype must be the same, otherwise that is not called as function overriding.
*/
int main (){

derived d;
d.display();// we have overrided the base class function in derived, hence it calls the derived class function.
//to call the base class function use below 
d.base::display();
}