#include <iostream>
using namespace std;

class A {

	int x,y;
	public:
	A () {};
	A (int a,int b):x(a),y(b) {}
	void print ()
	{
		cout << "x" <<x<<"y"<<y <<endl;
	}
	A operator++();  ///prefix
	A operator++(int ); ///post fix
};
A A::operator++()
{
	cout << "pre fix function \n"<<endl;
	A s;
	s.x=++x;
	s.y=++y;
	return s;
}
A A::operator++(int)
{
	cout << "post fix function \n"<<endl;
	A s;
	s.x=x++;
	s.y=y++;
	return s;
}
int main ()
{

	A a(1,2),b;
	b=++a;
	b.print ();
	b=++b;
	b.print ();

}
