
#include<iostream>
using namespace std;

class your;
class my{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend class your;
    void display (){
        cout<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
    }
};

class your{
    my m;
    public:
    void fun (){
        m.a=10;
        m.b=11;
        m.c=12;
        m.display();
    }
    
};
int main (){
your m;

m.fun();

}
