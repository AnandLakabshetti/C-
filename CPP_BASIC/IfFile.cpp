#include<iostream>
#include<fstream>

using namespace std;

int main (){
    ofstream outfile ("data");
    if (outfile.is_open() == 0){
        printf("True\n");
    }
    outfile<<"hello"<<endl;
    outfile.close();
}