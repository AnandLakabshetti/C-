#include <iostream>
using namespace std;

class A {
	public:
		A()
		{
			cout <<"In a constructor \n"<<endl;
			throw 10;
		}

};
int main ()
{
	try{
	
	A a;
	}
	catch(const int a){

		cout << "in catch block \n"<< a<<endl;
	}
}
