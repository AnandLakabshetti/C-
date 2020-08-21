#include <iostream>
using namespace std;

int main ()
{
	char  s[100];
	cout << "enter the string "<< endl;
	//cin >> s; it will not accept words after the space 
	cin.getline (s,sizeof (s)); ///for taking the string with space
	cout << "entered the string "<< s<< endl;


}
