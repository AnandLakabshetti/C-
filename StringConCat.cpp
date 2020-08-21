#include <iostream>
using namespace std;

int main ()
{

	string s1,s2;
	s1="hai";
	cout << "size of s1" << sizeof (s1) << endl;
	s2="hello";
	cout << s1<< endl;
	cout << s2<< endl;
	s1=s1+s2;

	cout << "s1+s2 "<< s1 << endl;
}
