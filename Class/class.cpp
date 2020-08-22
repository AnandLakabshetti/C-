#include <iostream>
using namespace std ;

class st
{

	int x;
};
int main ()
{
	class st a;
	a.x=10;  //default class member will be private 
	cout << a.x<<endl;


}
