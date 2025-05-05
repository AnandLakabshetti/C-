#include<iostream>
using namespace std;
enum day {MON=1, TUE, WED, THU, FRI, SAT, SUN};
int main (){

int option;

cout<<"Enter the day"<<endl;
cin>>option;
switch (option)
{
case MON:
    cout<<"MON"<<endl;
    break;
case TUE:
    cout<<"TUE"<<endl;
    break;
case WED:
    cout<<"WED"<<endl;
    break;
case THU:
    cout<<"THU"<<endl;
    break;
case FRI:
    cout<<"FRI"<<endl;
    break;   
case SAT:
    cout<<"SAT"<<endl;
    break;   
case SUN:
    cout<<"SUN"<<endl;
    break;      
default:
    cout<<"Invalid"<<endl;
    break;
}
return 0;
}
