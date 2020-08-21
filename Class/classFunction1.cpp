#include <iostream>
using namespace std;

class ST{

	private:
		int x,y;
	public :
		void setdata (int a ,int b)
		{
			x=a,y=b;
			///ut << "value of a and b" << a<<b<<endl;
		}

		void print (void );

};		
void ST :: print (void )
{

	cout << "x and y" << x<<y<<endl;
	/* inside the member function we will not use the "." operator */
	/* in non-member function we have to use the '.' operator */
}

int main ()
{
	ST v1,v2;

	cout << "sizeof v1"<< sizeof v1<<endl;
	//v.x=10;
//	cout << "v1.x" <<v1.x<<endl;
	v1.setdata(11,12);
//	cout << "v1.x and v1.y" << v1.x<<v1.y<< endl;

	v2.setdata(21,22);
//	cout << "v2.x and v2.y" << v2.x<<v2.y<< endl; ///gives an error as x and y are private and we are not accessing through 
//	member function while priting and setting a value we need to use member function other wise directly we cant change 


	
	v1.print ();
	v2.print ();
}
