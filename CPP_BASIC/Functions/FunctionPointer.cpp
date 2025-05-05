#include<iostream>
using namespace std;
int Max (int a, int b){
    return a>b?a:b;
}
int Min (int a, int b){
    return a<b?a:b;
}
int main (){
int (*fp) (int, int);//declaration
fp = Max; //init
cout<<"Max:"<<fp(5,10)<<endl; //call
fp = Min;
cout<<"Min:"<<fp(5,10)<<endl;  ;
}
