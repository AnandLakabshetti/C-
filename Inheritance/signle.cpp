#include <iostream>
using namespace std;

class A {

	public :
		int a,b;
		void setdata (int a, int b)
		{
			a=a;b=b;
		}
		void print_A ()
		{
			cout << "\n a "<<a<<"\nb"<<b<<endl;
		}
		A ()
		{	
			cout << "in constructor of class A\n"<<endl;
		}
};
class B :public A
{

	public :
		int c;
		B()
		{
			cout << "in constructor B\n"<<endl;
		}
};
int main ()
{
	B b;

}



