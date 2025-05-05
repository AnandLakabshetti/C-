#include<iostream>
using namespace std;
int main ()
{
    string str = "hello ";
cout <<"str.append ( world):"<<str.append(" world")<<endl;

cout <<"str.insert(3,AA):"<<str.insert(3,"AA")<<endl;;
// i can use str.insert(3," AA",2)->means 2 character only insert from string.
str = "programming";

cout <<"str.replace(3,5,ll): "<<str.replace(3,5,"KK")<<endl;
//replacing the 5 character from 3rd index by KK

str.erase(); //this is same as str.clear
cout<<str<<endl;

str = "programming";
str.push_back('z');//z should be alphabet
cout<<str<<endl;
//str.pop_back();// this is not available in older version of c++ compiler.

cout<<str<<endl;
string str2= "language";
str.swap(str2);

cout<<"str:"<<str<<"str2:"<<str2<<endl;

}