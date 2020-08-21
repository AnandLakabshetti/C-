#include <iostream>
using namespace std;

class ST {

	private :
		int real,imag;
	public:
		void setdata (int a, int b)
		{
			real=a, imag=b;
		}
		void print (void )
		{
			cout << "real -" << real<<endl;
			cout << "imag-" << imag<<endl;
		}
		void add (ST &a, ST&b)
		{
			real= a.real+b.real;
			imag=a.imag+b.imag;
		}
};
int main ()
{
	ST v1,v2,v3;

	v1.setdata (2,3);
	v2.setdata (4,5);

	v3.add (v1,v2);

	v3.print ();

}
