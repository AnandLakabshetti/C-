#include <iostream>
using namespace std;

class complex {
	private :
		int a,b;

	public:
		void showdata ()
		{
			cout << "in complex \n"<< "a->" << a<<"b->"<<b<<endl;
		}
		complex (){}
};


class complex1 {
	private :
		int m,n;
	public:
		void setdata(int x,int y)
		{
			m=x, n=y;

		}	
		void showdata ()
		{
			cout << "in showdata \n"<< "m-" << m<<"n-"<< n<<endl;
		}

		operator complex  ()
		{
			complex ob;
			
			return ob;
		}
};

int main ()
{
	complex var ;
	complex1 var1 ;
	var1.setdata (11,22);
	//var1.showdata ();
	
	/* we will get an error in below line as cannot convert from complex1 to complex  */
	/* we can resolve the issue with help of constructor in complex */
	/* and using a casting operator in right side variable class */

	var =var1; ///-> var.complex (complex1)
	var.showdata ();

}


