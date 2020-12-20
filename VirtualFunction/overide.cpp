#include <iostream>
using namespace std;

class A {
	public:
		virtual void fun ()
		{
			cout << "in class A fun ()\n"<<endl;
		}
		virtual void fun1 ()
		{
			cout << "in class A fun1 ()\n"<<endl;
		}

};
class B :public A{

	public :
		virtual void fun ()
		{
			cout << "in class B fun ()\n"<<endl;
		}
};

class C:public A {

	public :
		virtual void fun ()
		{
			cout << "in class C fun ()\n"<<endl;
		}
};
int main ()
{
	A a,*bptr;
	B b;
	C c;

	cout << "size of a \n"<< sizeof a<<endl;
	cout << "size of b \n"<< sizeof b<<endl;
	cout << "size of c \n"<< sizeof c<<endl;

	bptr =&a;
	bptr->fun();
	bptr->fun1();


	bptr =&b;
	bptr->fun();
	bptr->fun1();


	bptr =&c;
	bptr->fun();
	bptr->fun1();

	}


