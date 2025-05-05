#include<iostream>
#include<fstream>

using namespace std;

int main (){
    string str;
    ifstream infile ("data");
    if (infile.is_open() == 0){
        printf("True\n");
    }
    infile>>str;
    cout<<str;
    infile.close();
}