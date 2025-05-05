#include<iostream>
using namespace std;

int main (){
int num, i;
std::cout<<"Enter the number for which we want to find factors"<<std::endl;
std::cin>>num;

for (i=1;i<=num;i++){
    if (num %i == 0)
        std::cout<<i<<std::endl;
}
}