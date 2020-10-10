#include <iostream>
using namespace std;

class A {
	protected :
		int a;
	public:
		A():a(10) {
			cout << "constructor A \n"<<endl;
		}
		A (int x):a(x){

			cout << "parameterized constructor A \n"<<endl;
		}
		~A ()
		{
			cout << " Destructor A \n"<<endl;
		}


};
class B:public A {
	protected :
		int b;
	public:
		B():A(),b(20) {
			cout << "constructor B \n"<<endl;
		}
		B (int x,int y): A (x) ,b(y){

			cout << "parameterized constructor B \n"<<endl;
		}
		~B ()
		{
			cout << " Destructor B \n"<<endl;
		}

};
class C:public A
{
	protected :
		int c;
	public:
		C():A(),c(30) {
			cout << "constructor C \n"<<endl;
		}
		C (int x,int z):A(x),c(z){

			cout << "parameterized constructor c \n"<<endl;
		}
		~C ()
		{
			cout << " Destructor C \n"<<endl;
		}

};

class D:public B, public C
{
	protected :
		int d;
	public:
		D():B(),C(),d(20) {
			cout << "constructor D \n"<<endl;
		}
		D (int x,int y,int z,int w):C(x,y) ,B(x,z) ,d(w){

			cout << "parameterized constructor D \n"<<endl;
		}
		~D ()
		{
			cout << " Destructor D \n"<<endl;
		}

		void print (){


		//	cout << "a -" << a<<endl; 
			cout << "B::a -" << B::a<<endl; 
			cout << "C::a -" << C::a<<endl; 
			cout << "b -" << b <<endl; 
			cout << "c -" << c <<endl; 
			cout << "d -" << d <<endl; 
		}

};
int main ()
{
D d;
cout << "size of obj\n"<<sizeof d<<endl;
d.print();

}
