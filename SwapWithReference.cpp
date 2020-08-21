#include <iostream>
using namespace std;
void swap (int &x, int &y)
{
	int z=x;
	x=y;
	y=z;

}
int main ()
{
	int x=10,y=20;
	cout << "x="<<x<< "y"<<y<<endl;
	swap (x,y);

	cout << "x="<<x<< "y"<<y<<endl;

}
