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
		complex (int k) {a=k;b=0;}
		complex () { }

};

int main ()
{
	complex var ;
	var.setdata (11,22);
	var.showdata ();

	/* Type conversion from basic type to class type which is implemented using constructor */
	int x=5;
	var=x;//--> var.complex(x) ////error  ///cannot convert the int to complex 
	/* to overcome this error we use constructor    */
	var.showdata();

}


