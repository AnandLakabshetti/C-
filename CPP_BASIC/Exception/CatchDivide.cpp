#include<iostream>
using namespace std;


int division(int a, int b) {
    if (b==0)
        throw 1;
    return a/b;
}
int main (){
int x=10, y=0, z;
try{
    /* Try catch block is useful when we are calling the function otherwise writing throw block inside
    the try block not useful*/
    z=division(x,y);
    cout<<"z:"<<z<<endl;
}
catch(int e){
    //catch the error thrown by try block
cout<<"divide by Zero error "<<endl;
}
cout<<"Bye"<<endl;
}
