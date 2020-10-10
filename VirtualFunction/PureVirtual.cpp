/* A virtual function which declared but not defined in base class is refered sas pure virtual function */

/* if class contains atleast one pure virtual function then class said to be abstract type*/
/* if pure virtual function is declared in base class then it must be overrided in derived class otherwise derived class becomes abstract type class  */

#include <iostream>
using namespace std;

class A  ///abstract type 
{
	public:
		virtual void fun ()=0;///pure virtual function 
};
class B :public A
{
	public:
		void fun ()
		{
			cout << "Fun function \n"<<endl;
		}
};
int main ()
{

//	A a ;///invalid to create an object of abstract type class

	B b,*bptr;
	bptr = &b;
	bptr->fun ();
}
