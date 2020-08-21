#include <iostream>
using namespace std;

int main ()
{
	string s;
	cout << "enter the string "<< endl;

	//cin >> s; it will not accept words after the space 
	getline (cin,s); ///for taking the string with space
	cout << "entered the string "<< s<< endl;


}
