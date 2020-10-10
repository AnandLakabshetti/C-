#include <iostream>
using namespace std;

class A {
	private :
		int a;
	public :
		void setvalue (int x)
		{
			a=x;
		}
		void print ()
		{
			cout << "in class B \n"<< a<<endl;
		}

};
/* if base class it is private then we can not access */
/* if in base class it is protected we can access it with all specifiers i.e public, private and protected specifiers*/
/* if it is public in base class then also we can access it */

class B :public A
{

	private :
		int x,y;
	public:
		void setdata(int p)
		{

			setvalue (p);
			print ();
		}

};
int main ()
{
	B b;
	b.setdata (5);
	b.setvalue (5);
}


