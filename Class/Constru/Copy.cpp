#include <iostream>
#include <string.h>
using namespace std;

class A {

	char *str;
	public :

	A (const char *p)
	{

		cout << "In "<< endl;
		str=new char [strlen (p) ] + 1;
		strcpy (str,p);
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
	obj.print ();
	A obj2=obj;

	obj.modify ();
	obj.print ();
	obj2.print ();


}
