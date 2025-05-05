#include<iostream>
using namespace std;

class A{
    private:
    int a;
    public:
    A(){
        cout<<"Non-parameterized\n";
    }
    A(int x){
        cout<<"Parameterized\n";
        a=x;
    }
    A(A &ob){
        cout<<"Copy\n";
        a=ob.a;
    }
};
int main (){
    A aa;
    A b(1);
    A c(b);

}