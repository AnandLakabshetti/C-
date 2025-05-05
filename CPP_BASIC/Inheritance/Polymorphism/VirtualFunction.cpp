#include<iostream>
using namespace std;
class BasicCar
{
public:
 virtual  void start()
 {
 cout<<"Car started"<<endl;
 }
};
class AdvanceCar: public BasicCar
{
public:
void start()
 {
 cout<<"Car started in advance"<<endl;
 }
 void playMusic()
 {
 cout<<"Music Playing"<<endl;
 }
};

int main (){
AdvanceCar a;
BasicCar *ptr=&a;
ptr->start();
}
