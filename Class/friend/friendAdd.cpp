#include <iostream>
using namespace std;
//friend A add (A& ,B&);
/*
   class A
   {

   int x,y;
   };
   class B
   {
   int a,b
   };
   */

class B;
class A {

	private :
		int x,y;
	public:
		void setdata (void )
		{
			cout << "enter the class A  data " << endl;
			cin >>x>>y;
		}
		void print(void )
		{
			cout << "x and y" << x<<y<< endl;
		}
		friend A add(A&,B&);	
};

class B
{
	private :
		int a,b;
	public:
		void setdata (void )
		{
			cout << "in data of class B " << endl;
			cin >> a>>b;
		}
		friend A add (A& ,B&);
};

A add  (A &ob, B &ob1)
{
	A obj;
	obj.x=ob.x+ob1.a;
	obj.y=ob.y+ob1.b;
	return obj;
}
int main ()

{
	A obj1;
	B obj2;
	obj1.setdata ();
	obj2.setdata ();

	A c = add (obj1,obj2);
	c.print ();
}
