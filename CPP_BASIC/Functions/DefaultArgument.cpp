#include<iostream>
using namespace std;
/*
Default arguments help reduce the need for function overloading. Without default arguments, 
you may need to create multiple versions of a function to handle different numbers of arguments. 
Default arguments allow you to write just one function that can handle multiple cases.

*/

int Max (int a=0, int b=0, int c=0){
    return a>b && a>c ? a:(b>c?b:c);
}

int main()
{
    cout <<Max()<<endl;
    cout <<Max(5)<<endl;
    cout <<Max(10,5)<<endl;
    cout <<Max(10,20,30)<<endl;
}
