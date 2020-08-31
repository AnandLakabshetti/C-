#include <iostream>
using namespace std;

class A{

	private :
		int x,y;
	public:
		A(){

			cout << "inside the constructors \n"<<endl;
			x=10,y=11;
		}
		void print ()
		{
			cout << "value of x and y after contructor call "<< x << " " << y<<endl;
		}
};

int main ()
{

	A a;
	A a1;

	a.print();
	a1.print();
}
