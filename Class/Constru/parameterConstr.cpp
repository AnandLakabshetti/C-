#include <iostream>
using namespace std;

class A {

	int x,y;

	public:
	A (){
		cout << "in default contructors \n"<<endl;
	}

	A (int a)
	{
		x=a;
		cout <<"in parameterised contructor \n"<<endl;	

	}
	A (int a,int b)
	{
		x=a,y=b;
		cout <<"in parameterised contructor two argument \n"<<endl;	
		cout << x<<" "<<y<<endl;
	}
	void print ()
	{
		cout << x<<" "<<y<<endl;
	}


};


int main ()
{

	A a;
	A a1(1);
	A a2(11,22);
	a.print ();
	a1.print ();
	a2.print ();
}
