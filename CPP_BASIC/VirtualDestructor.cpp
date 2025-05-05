#include<iostream>
using namespace std;

class base {
    public:
    base (){cout<<"base class constructor\n";}
    virtual ~base (){
        cout<<"Base class destructor\n";
    }
};
class derived :public base {
    public:
    derived (){cout<<"derived class constructor\n";}
    ~derived (){
        cout<<"derived class destructor\n";
    }
};
void fun (){
    derived d;
    //dynamically create a derived class object.
   base *ptr = new derived();
   delete ptr;// here if we do not make base class destructor as virtual then derived class destructor will not be called.
}

int main (){
fun ();
}
