#include <iostream>
using namespace std;

int sum (int a,int b)
{
	cout << " int int "<<endl;
}

int sum (int a,int b,int c)
{
	cout << " int int int "<<endl;
}
int sum (int a,int b, float c)
{
	cout << " int int float "<<endl;
}


int main ()
{

	cout << "in main " << endl;

	sum (1,2,3);
	sum (1,2,3.4f);
	sum (1,2);


}

