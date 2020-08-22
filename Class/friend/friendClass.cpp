#include <iostream>
using namespace std;

class A {

	private :
		int a=11,b=13;
		friend class B;
};

class B{
	public:
	void fun (A& a)
	{
		cout << "value of a and b" << a.a <<" "<<a.b<<endl;
	}
	void setdata(A& ob, int a, int b)
	{	
		ob.a=a,ob.b=b;
	}
};

int main ()
{
	A a;
	B b;
	b.setdata (a,33,44);
	b.fun (a);
}
