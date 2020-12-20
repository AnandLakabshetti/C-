#include <iostream>
using namespace std;

class A {
	public:
		A()
		{
			cout <<"In a constructor \n"<<endl;
			//throw 10;
			throw "Anand";
		}

};
int main ()
{
	try{
	
	A a;
	}
	//catch(const int a){
	catch(const char  *a){

		cout << "in catch block \n"<< a<<endl;
	}
}
