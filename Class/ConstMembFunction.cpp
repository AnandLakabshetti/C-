#include <iostream>
using namespace std;

class A{
	private :
		int x,y;
	public:

		void setdata (int a,int b)
		{
			x=a,y=b;
		}
		void print () //const
		{
			cout <<" "<< x << " " << y<<endl;
			x=20, y=34;
		}
/*		A modify (A &ob)
		{
			//x=111,y=111;
		//	return *this;
		ob.x=33;

		return ob;
		}
*/
};

int main ()
{
	A a,a1;

	a.setdata(11,23);
	a.print ();
	a.print ();
	a1.print ();

}
