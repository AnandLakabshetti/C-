#include<iostream>
using namespace std;

class A {

	int x,y;
	public:

	A () {};
	A (int a, int b): x(a),y(b) {};


	friend	A operator-( A &, A &);

	void print ()
	{
		cout << " in print  \n" << "x" << x << " " << y << endl;
	}
};
A  operator-(A &obj, A& ob)
{
	A s;

	s.x=obj.x-ob.x;
	s.y=obj.y-ob.y;
	 return s;
}

int main ()
{
	A a(2,2),b(2,-1),c;
	a.print ();
	b.print ();
	//b=-a;
	c=a-b;
	c.print ();

}
