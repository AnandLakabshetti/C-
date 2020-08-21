#include <iostream>
using namespace std;

struct name 
{

	int a;
	mutable int b;
	char c;
};
int main ()
{

	struct name a;
	const struct name a1={1,2,'c'};
	//a1.a=23; this will cause an error as it is read only object we are trying to modify

	a1.b=44;//this is possible as we are mpdifying the mutable member of onject 
	a.a=10;
	a.b=11;
	a.c='b';
	cout << "a.a" << a.a<<endl;
	cout << "a.b" << a.b<<endl;
	cout << "mutable a1.b" << a1.b<<endl;
	cout << "a.c" << a.c<<endl;
}
