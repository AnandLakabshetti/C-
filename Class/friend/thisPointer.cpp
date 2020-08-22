#include <iostream>
using namespace std;

class A {
	private :
		int x,y;
	public:
		void setdata(int a,int b)
		{
			x=a,y=b;
		}
		void print ()
		{

			cout << "in print function" <<" "<< x<< " " <<y<<endl;
		}

};

int main ()
{
	A a,a1,a2;
	a.setdata(1,2); ///setdata (&obj,1,2);
	a.print (); //print (&obj);
	a1.setdata(3,4); ///setdata (&obj,3,4);
	a1.print (); //print (&obj);
	a2.setdata(5,6); ///setdata (&obj,5,6);
	a2.print (); //print (&obj);

	/*  
	    this =&obj;
	 *this = obj;
	 this->x=(&obj)->x;
	 (*this).x=obj.x;

 *  */



}
