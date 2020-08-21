#include <iostream>
using namespace std;

int input ()
{
	return 0;
}

int sum (int a, int b, int c=input (), int d=input ())
{
	return a+b+c+d;

}

int main ()
{

	bool ans ;

	cout <<"do u want the ans with default argu or not " <<endl;
	cin >>ans;

	if (ans == 1)
	{
		cout << "enter the value of a and b" << endl;
		cout << sum (1,4)<<endl;
	}
	else
	{
		cout << "enter the value of a ,b, c and d" << endl;
		cout << sum (1,4,5,6)<< endl;
	}
}
