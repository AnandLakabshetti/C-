#include <iostream>
using namespace std;

class A {

	int x,y;

	public:
	A () :x(1),y(2){
		cout << "in default contructors \n"<<endl;
	}

	A (int a, int b):x(a),y(b)
	{
	/*	x=a,y=b;*/
		cout <<"in parameterised contructor two argument \n"<<endl;	
	//		cout << x<<" "<<y<<endl;
	}
	A ( A &ob):x(ob.x) ,y(ob.y)
	{
	/*	x=a,y=b;*/
		cout <<"in Copy contructor \n"<<endl;	
	//		cout << x<<" "<<y<<endl;
	}

	void print ()
	{
		cout << x<<" "<<y<<endl;
	}


};


int main ()
{

	A a;
	//A a1(a1);
	A a1=a;
	A a2(11,22);
	a.print ();
	a1.print ();
	a2.print ();
}
