#include<iostream>
using namespace std;

class BasicCar
{
public:
 void start()
 {
 cout<<"Car started"<<endl;
 }
};
class AdvanceCar: public BasicCar
{
public:
 void playMusic()
 {
 cout<<"Music Playing"<<endl;
 }
};

int main (){
AdvanceCar A;
A.playMusic();//allowed
A.start();//allowed.
BasicCar *ptr = &A;
ptr->start(); //allowed.
//ptr->playMusic();//not allowed.

BasicCar B;
//AdvanceCar *aptr=&B;//NOT ALLOWED.
}
