#include<iostream>
using namespace std;
int main (){

int n, i, digit;
int newNum=0;
std::cout<<"Enter the Number of which we want to find factorial:";
std::cin>>n;
i=n;
while (n){
 digit = (n%10);
 newNum = newNum+(digit*digit*digit);
 n=n/10;
}

if (newNum == i)
std::cout <<"Armstrong"<<std::endl;
else 
std::cout <<"Not Armstrong"<<std::endl;

}