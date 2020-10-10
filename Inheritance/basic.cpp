#include <iostream>
using namespace std;

class base 
{
	protected :
		int a,b;
	public:
		void setdata (int x,int y)
		{

			a=x,b=y;
		}
		void print_a ()
		{
			cout << "value of a and b \n" << a << "\n"<<b<<endl;
		}

};
class derived :public base
{

	public :
		int c;
		void setdata_d (int x)
		{

			c=x;
			setdata (1,2);
		}
		void print_b ()
		{
			cout << "value of a and b and c \n" << a << "\n"<< "\nb-" << b <<"\nc-"<< c<<endl;
		}

};
int main ()
{

	base b;
	b.setdata (11,22);
	b.print_a ();
	derived c;
	c.setdata_d(33);

//	c.a=12;
	c.print_b();

}
