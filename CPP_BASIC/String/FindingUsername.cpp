#include<iostream>
using namespace std;
int main (){
string str="Anandlakab@gmail.com";
int a = str.find('@');
cout<<str.substr(0,a)<<endl;

}