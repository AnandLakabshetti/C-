#include <iostream>
using namespace std;

bool process ();
int main ()
{

	if (process ())
		cout << "process continued " <<endl;
	else 
		cout << "process not continued " <<endl;
}

bool process ()
{
char  ans;
cout << "do u want to continue Y/N" << endl;
cin >> ans;

if (ans=='Y')
	return 1;
if (ans == 'N') 
	return 0;
}
