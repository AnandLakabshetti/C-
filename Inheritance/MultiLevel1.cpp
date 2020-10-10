#include <iostream>
using namespace std;
class A 
{
	protected :
		int x;
	public:
		A () :x(10)
	{
		cout << "constructor A \n"<<endl;
	}
		A (int a):x(a)
	{

		cout << "parameterized constructor A \n"<<endl;
	}

		~A(){

			cout << " destructor A \n"<<endl;
		}
};

class B :public A
{
	protected :
		int y;
	public:
		B ():A(),y(20){
			cout << "constructor B\n"<<endl;
		}

		//B (int a,int b):x(a),y(b),z(c){} //invalid
		B (int a,int b):A(a),y(b){
			cout << "parameterized constructor B \n"<<endl;
		}
		~B(){

			cout << "Destructor B \n"<<endl;
		}
		void print ()
		{
			cout << "in Class B " << "x-" <<x<< "y-"<<y<<endl;
		}
};
class C :public B
{
	protected :
		int z;
	public:
		C():B(),z(30){
			cout << "constructor C \n"<<endl;
		}

		//B (int a,int b):x(a),y(b),z(c){} //invalid
		C(int a,int b,int c):B(a,b),z(c){
			cout << "parameterized constructor C \n"<<endl;
		}
		~C(){

			cout << "Destructor C \n"<<endl;
		}
		void print ()
		{
			cout << "in Class C " << "x-" <<x<< "y-"<<y<< "z-"<<z<<endl;
		}
};

int main ()
{

	B obj1(1,2);
	cout << "Obj1 data \n"<<endl;
	obj1.print ();

	cout << "for Class child \n"<<endl;
	C obj;
	cout << "\n ****************************Obj data**************** \n"<<endl;
	obj.print ();

	C obj2(111,222,333);
	cout << "Obj2 data \n"<<endl;
	obj2.print ();
}
