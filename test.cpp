#include <iostream>
using namespace std;

class A {
	//	private :
	public:
		int a,b;
		A ():a(1),b(2){
		cout << "In class A constructor \n"<<endl;
		}
		~A()
		{
		cout << "In class A Destructor \n"<<endl;
		}
};
class B:public A
{
	private :
		int c,d;
	public:
		B():c(3),d(4){
			
		cout << "In class b constructor \n"<<endl;
		}

		void print_B()
		{
			//	cout << "\nIn class B "<<a<< " "<<b << " "<<c " "<<d<<endl;
			cout << "\nIn class B"<<endl;
			cout << a << " "<< b <<" "<<c<< " "<<d<<endl;
		}
		~B()
		{

		cout << "In class b Destructor \n"<<endl;
		}
};
int main ()
{
//	A a;
	B b;
	b.print_B ();

}
