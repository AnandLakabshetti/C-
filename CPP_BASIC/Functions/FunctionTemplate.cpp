#include<iostream>
using namespace std;
template <class T>
T add (T a, T b){
    return a+b;
}
int main (){
int a=10, b=20;

cout<<add(10,20)<<endl;
cout<<add(10.45f,20.65f)<<endl;

}