#include <iostream>
using namespace std;

void swap (int &x, int &y)
{
	int t=x;
	x=y;
	y=t;
}
void swap ( float &x, float &y)
{
	float t=x;
	x=y;
	y=t;
}

int main ()
{
cout << "welcome to function overloading "<<endl;
int a=10,b=20;
float x=11.5,y=12.5;
cout << a <<b<<endl;
swap (a,b);
cout << a <<b<<endl;

cout << x <<y<<endl;
swap (x,y);
cout << x << y <<endl;

}
