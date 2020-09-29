#include <iostream>
using namespace std;

class A {
	public :
	const 	int x,y;
	public :
		A():x(1),y(2)
		{
			cout << "default contructor \n"<<endl;
		}

		~A()
		{
			cout << "default destructor \n"<<endl;
		}

		void print () const //const object must be accessed with const member function 
		{
		cout << "in print " << x<< " "<<y<<endl;
		}
};
int main ()
{
	 const A a;
	a.print();

}
