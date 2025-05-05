#include<iostream>
using namespace std;

int main ()
{
int x=10, y=5, z;
z= x & y;// z=0
cout<<"x:"<<x<<"y:"<<y<<endl;
std::cout <<"x & y:"<<z<<std::endl;
z= x | y;/// z=15
std::cout <<"x | y:"<<z<<std::endl;
z= x ^ y; /// z=15
std::cout <<"x ^ y:"<<z<<std::endl;
z= ~y; ///z= -6
std::cout <<"~x :"<<z<<std::endl;

x=x>>1; //x=5;
y=y<<1; //y=10 

}