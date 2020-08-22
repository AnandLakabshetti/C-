#include <iostream>
using namespace std;

class A{
	public:
	int a;
	class B
	{
	public:
		int b;
	};
	B var;
};

int main ()
{

	A obj;
	obj.a=11;
	obj.var.b=22;
	A::B b;
	b.b=1111;    ///this is different from obj.var.b 

	cout << b.b<<endl;
	cout << obj.a<<endl;
	cout << "obj.var.b"<<obj.var.b<<endl;
}
