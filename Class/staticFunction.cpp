#include <iostream>
using namespace std;

class A {

	private :
		int x,y;
		static int z;
	public :
		void setdata (int a, int b)
		{
			x=a,y=b;
		}
		void print ()
		{
			cout << "x"<< x << "y"<<y <<endl;
			cout << "z" << z<<endl;
		}
		static void modify (A &obj)
		{
			z=35;
			obj.x=15, obj.y=25;
		}

};
int A::z=30;
int main ()
{

	A obj;
	obj.setdata (1,2);
	cout << "Z " << A::z<<endl;
	obj.print ();
	obj.modify (obj);
	cout << "Z " << A::z<<endl;
	obj.print ();

}
