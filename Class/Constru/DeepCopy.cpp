#include <iostream>
#include <string.h>
using namespace std;

class A {

	char *str;
	public :

	A (const char *p)
	{

		str=new char [strlen (p) ] + 1;
		strcpy (str,p);
	}

	A (A &obj)
	{
	cout << "explicit copy contructor \n"<< endl;

	str = new char [strlen (obj.str)]+1;
	strcpy (str, obj.str);
	}
	void modify ()
	{
		str[0]='s';
	}	
	void print  ()
	{
		cout << str<<endl;
	}
};
int main ()
{

	A obj("vector\n");
	A obj2=obj;

	obj.modify ();
	obj.print ();
	obj2.print ();


}
