#include <iostream>
using namespace std;

class A {

	public :
		void fun ()
		{
			cout << "in fun class A \n"<<endl;
		}

};
class B :public A{

	public :
		void fun ()
		{
			cout << "in fun class B \n"<<endl;
		}

};

int main ()
{

	A a ,*ptr ;

	ptr=&a;
	ptr->fun ();

	B b ,*dptr;

	dptr=&b;
	dptr->fun ();

//	dptr=&a;  //error as derived class pointer cannnot point to base class object but reverse is possible
	//dptr->fun ();

	ptr=&b;
	ptr->fun ();
}

