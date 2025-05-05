#include<iostream>
using namespace std;

class base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void display(){
        cout<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
    }
};
int main (){
base x;
//Upon object we cannot access the private and protected data members of the class.
// to access private and protected data members, we can use the member functions of the class
//x.a=10;// This is not allowed.
//x.b=20;// This is not allowed.
x.c=30; //This is allowed.
x.display();
}
