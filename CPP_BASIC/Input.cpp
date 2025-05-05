#include<iostream>
int main (){
    std::string name;
    std::cout <<"May i know your name\n";
    //std::cin>>name;
    getline(std::cin,name);   // if we use cin then it will not take string after space
    std::cout<<"Welcome Mr:"<<name;
}

//getline(std::cin,name) is used to read the string with space.
