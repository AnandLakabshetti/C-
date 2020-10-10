#include <iostream>
using namespace std;
class A 
{
	protected :
		int x,y;
	public:
		A () :x(10),y(20)
	{
		cout << "constructor A \n"<<endl;
	}
		A (int a,int b):x(a),y(b)
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
		int z;
	public:
		B ():A(),z(30){
			cout << "constructor B\n"<<endl;
		}

		//B (int a,int b):x(a),y(b),z(c){} //invalid
		
		
		B (int a,int b,int c):A(a,b),z(c){
			cout << "parameterized constructor \n"<<endl;
		}
		~B(){

			cout << "Destructor B \n"<<endl;
		}
		void print ()
		{
			cout << "in Class B " << "x-" <<x<< "y-"<<y<< "z-"<<z<<endl;
		}
};

int main ()
{
	B obj;
	cout << "Obj data \n"<<endl;
	obj.print ();
	B obj1(1,2,3);

	cout << "Obj1 data \n"<<endl;
	obj1.print ();

}
