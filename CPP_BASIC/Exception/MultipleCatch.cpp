#include<iostream>
using namespace std;
class myException1: exception{

};
class myException2: public myException1{

};
int main (){
int x=10, y=0, z;
try{
    /* Try catch block is useful when we are calling the function otherwise writing throw block inside
    the try block not useful*/
   // z=division(x,y);
   if (y==0)
    throw myException1(); // i can throw my own class object as well.
    cout<<"z:"<<z<<endl;
}
catch(int e){
    //catch the error thrown by try block
cout<<"Int catch"<<endl;
}
catch (float f){
    cout<<"Float catch"<<f<<endl;
}
catch (char c){
    cout<<"Char catch"<<endl;
}
catch ( myException2 e){
    cout<<"myException2 catch"<<endl;
}
catch ( myException1 e){
    cout<<"myException1 catch"<<endl;
}
catch (...){
    cout<<"In catch ALL block\n";
}
cout<<"Bye"<<endl;
}
