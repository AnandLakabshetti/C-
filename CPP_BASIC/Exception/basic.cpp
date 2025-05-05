#include<iostream>
using namespace std;
int main (){
int x=10, y=0, z;
try{
    if (y==0)
    throw 1;//we can throw string as well and catch it in catch block

    z=x/y;
    cout<<"z:"<<z<<endl;
}
catch(int e){
    //catch the error thrown by try block
cout<<"divide by Zero error "<<endl;
}
cout<<"Bye"<<endl;
}
