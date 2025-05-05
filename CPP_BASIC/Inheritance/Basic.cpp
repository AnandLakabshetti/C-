#include <iostream>
using namespace std;

class base{
    public:
    int a;
    void display (){
        cout<<"Base class display:"<<endl;
    }
};
class derived:public base{
    public:
        void show (){
        cout<<"derived class show:"<<endl;
    }
    };
int main (){
    derived d;
    d.display();/// this will call the display from base class, re-usability.
    d.show();// this will call the derived class show function.
    return 0;
}
