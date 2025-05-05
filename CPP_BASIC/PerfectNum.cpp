#include<iostream>
using namespace std;
// sum of the factors = 2*num then it is a perfect number.
int main (){
    int num, i, sum=0;
    std::cout<<"Enter the number"<<std::endl;
    std::cin>>num;

    for (i=1;i<=num;i++){
        if (num %i == 0)
            sum+=i;
    }
    if (sum == (2*num))
    std::cout<<"Perfect Numner"<<std::endl;
    else 
    std::cout<<"Not a Perfect Numner"<<std::endl;
}