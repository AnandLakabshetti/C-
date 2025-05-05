#include<iostream>
#include<string>
using namespace std;
int main (){
int i, count=0;
string str= "Anand";
cout<<"Before conversion:"<<str<<endl;
    for (i=0;str[i];i++){
        if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i]+32;
    } 

cout<<"After conversion:"<<str<<endl;
str= "HeLL5o";
cout<<"Before conversion:"<<str<<endl;
string::iterator it;
for (it = str.begin(); it != str.end(); it++){
            if (*it >= 'A' && *it <= 'Z')
        *it = *it+32;
}

cout<<"After conversion:"<<str<<endl;
}
