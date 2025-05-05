#include<iostream>
using namespace std;
void fun (){
    static int c=10;// reinitialization is not allowed for static variables.
    c++;
    cout<<"c:"<<c<<endl;
}
int main (){
    fun ();
    fun ();
}
