#include <iostream>
using namespace std;

float sum (float a)
{
	return a+1;
}
float sum (double  a)
{
	return a+1;
}

int main ()
{

	cout << sum (11.4)<<endl;
	cout << sum (11.4f)<<endl;
	//cout << sum (11)<<endl; this will cause an ambugity in code as compiler will not diffrentiate the which fun it has to take as arguments is int not double or float .
	

}

