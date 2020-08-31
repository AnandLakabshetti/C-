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
};

int main ()
{

	A a;

}
