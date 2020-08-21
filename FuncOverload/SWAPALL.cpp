#include <iostream>
using namespace std;

int  swap (int &x, int &y)
{
	int t=x;
	x=y;
	y=t;
}

float  swap ( float &x, float &y)
{
	float t=x;
	x=y;
	y=t;
}
char   swap ( char  &x, char &y)
{
	char t=x;
	x=y;
	y=t;
}

int main ()
{
	cout << "welcome to function overloading "<<endl;
	int a=10,b=20;
	float x=11.5,y=12.5;
	char c='c',ch ='d';
	cout << a <<b<<endl;
	swap (a,b);
	cout << a <<b<<endl;

	cout << x <<y<<endl;
	swap (x,y);
	cout << x << y <<endl;
	
	cout << c << ch <<endl;
	swap (c,ch);
	cout << c << ch <<endl;

}
