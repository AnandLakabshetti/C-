#include<iostream>
using namespace std;

class A {

	int x,y;
	public:

	A () {};
	A (int a, int b): x(a),y(b) {};


	A operator-();

	void print ()
	{
		cout << " in print  \n" << "x" << x << " " << y << endl;
	}
};
A A:: operator-()
{
	A s;

	s.x=-x;
	s.y=-y;
	return s;
}

int main ()
{
	A a(2,2),b(2,3),c;
	a.print ();
	b.print ();
	b=-a;
	//c=a-b;
	b.print ();

}
