#include<iostream>

using namespace std;
int main(){
    int n, i, digit;
    int RevNumber=0;
    std::cout<<"Enter the Number of which we want to find factorial:";
    std::cin>>n;
    i=n;
    while (n){
     digit = (n%10);
     RevNumber = RevNumber*10+digit;
     n=n/10;
    }
    std::cout<<"Reverese Number is :"<<RevNumber;

    if (RevNumber == i)
    std::cout<<"\nPallindrome"<<std::endl;
    else
    std::cout<<"\nNot Pallindrome"<<std::endl;

}