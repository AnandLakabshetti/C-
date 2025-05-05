#include<iostream>
using namespace std;
int main (){

    int hrs;
    cout<<"Enter the working hours"<<endl;
    cin>>hrs;
if (hrs >= 9 && hrs <= 18){
    std::cout<<"working"<<std::endl;
}else{
    std::cout<<"Non-working"<<std::endl;
}
}