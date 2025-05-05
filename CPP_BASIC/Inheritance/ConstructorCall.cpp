#include <iostream>
using namespace std;

class base{
    private:
    int x;
    public:
    base (){
        cout<<"Non-Param base class\n";
    }
    base (int b){
        x=b;
        cout<<"parameterised base class\n";
    }
    void display (){
        cout<<"Base class display:"<<x<<endl;
    }
};

class derived:public base{
    protected:
    int y;
    public:
    derived(){
        cout<<"Non-Param derived  constructor\n";
    }
    derived(int a){
           // y=a;
        cout<<"parameterized derived  constructor\n";
    }
    ///this will call the parameterized constructor of the base class. class.
    derived(int a, int b):base (b){
           // y=a;
        cout<<"parameterized derived  constructor\n";
    }
        void show (){
        cout<<"derived  class show:"<<y<<endl;
    }
    };
int main (){
    derived d(5);
    derived d1(5,10);// this will call base and derived class parameterized constructors.
    return 0;
}
