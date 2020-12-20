#include <stdio.h>
#include <iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		void print ()
		{
			cout <<"\n"<< a<<endl;
		}
		A():a(11){
			cout <<"\nparameterized constructor" <<endl;
		}
		A(int x):a(x){
			cout <<"\nparameterized constructor" <<endl;
		}
};
int main ()
{
	cout << "hello world in c++ \n"<<endl;
	A aa(12);
	aa.print();
}

