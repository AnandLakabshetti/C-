#include <iostream>
using namespace std;


class A{
	private :
		int x,y;
	public:
		A();
		A(A&);
		void operator= (A &);
};

A::A():x(1),y(2)
{
	cout << "in default contructor \n"<<endl;
}


A::A( A &obj) :x(obj.x),y(obj.y)
{
	cout << "in copy contructor \n"<<endl;
}

void A::operator =  (A &obj)
{
	cout <<  "Assignment operator overloading function \n"<<endl;
	x=obj.x, y=obj.y;
}
A & fun (A obj)
{

	static A temp;
	return temp;
}
int main ()
{
	A obj;
	A obj2 = obj;//A obj2(obj)
	A obj3;
	obj3=obj; //---> obj3.operator (obj)
	A obj4=fun (obj3);
}
