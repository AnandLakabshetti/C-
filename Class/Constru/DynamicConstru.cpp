#include <iostream>
using namespace std;

class A {
	int x,y;
	public :
	A()
	{
		cout<< "default constructor \n"<<endl;
		x=10,y=20;

	}

	A(int a,int b)
	{
		cout << "parameterised contructor \n"<<endl;
		x=a,y=b;
	}
	A (A &obj)
	{
		cout << "copy constructor \n"<<endl;
		x=obj.x, y=obj.y;
	}

	void print ()
	{
		cout << x << " " << y<< endl;

	}

};
int main ()
{
	A *ptr =new A;
//	A *ptr =new A;
	ptr->print ();

	ptr = new A (222,333);

	ptr->print ();


}
