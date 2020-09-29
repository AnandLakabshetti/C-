#include <iostream>
using namespace std;

class complex {
	private :
		int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x, b=y;

		}	
		void showdata ()
		{
			cout << "in showdata \n"<< "a-" << a<<"b-"<< b<<endl;
		}

		operator int ()
		{
			return a;
		}
};

int main ()
{
	complex var ;
	var.setdata (11,22);
	var.showdata ();

	/* Type conversion from class type to Basic type  which is implemented using casting operator  */
	int x;
	//Error will come on below statement as cannot convert from complex to int 
	/* To do conversioin from class to basic (primitive ) type then we use casting operator */

	x=var;
	cout <<"x-"<< x <<endl;

}


