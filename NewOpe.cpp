#include <iostream>
using namespace std;

int main ()
{
	int *ptr = new int;
	*ptr = 1000;

	cout << "*ptr " << *ptr<< endl;

}
