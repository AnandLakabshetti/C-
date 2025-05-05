#include<iostream>
using namespace std;

int main (){
    //netsalary = basicsalary + basicsalry*percentage of allowance- basic salary*percentage of deduction
    
    int BasicSalary;
    float Allowance, deduction;
    float NetSalary;
    
    std::cout<<"please enter the basic salary\n"<<std::endl;
    std::cin>>BasicSalary;
    
    std::cout<<"please enter the allowance percentage and deduction percentage\n"<<std::endl;
    std::cin>>Allowance>>deduction;
    
     NetSalary = (BasicSalary+ ((BasicSalary*Allowance)/100)- ((BasicSalary*deduction)/100));
    
     std::cout<<"NetSalary: "<<NetSalary<<std::endl;
    
        return 0;
    }
    