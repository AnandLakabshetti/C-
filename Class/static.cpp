#include <iostream>
using namespace std;

class A{


	public :
	int x,y;
	static int z;
	void setdata (int a,int b)
	{
		x=a, y=b;
	}
	void print ()
	{
	cout << "data members of the class \n" <<x << "\n"<< y << endl; 
	}
	static void mod (A &a)
	{
		a.x=111,a.y=222;
	}
	static void mod1 ()
	{
	//	x=111,y=222; ///invalid 
		cout << "in mod1\n"<<endl;
	}

};

int A::z=22;

/*static data members can be accessed in the non static member function and can also non static member function and can be also accessed in static member function.
*/

// int A:: Z=30; --> valid operation.
// int A:: x=10 --> invalid operation.
//A::z  and obj.z --> method for access the static member  
int main ()
{
	A a,a1,a2;
	a.setdata(1,2);
	a1.setdata(3,4);
	a2.setdata(5,6);
	a.print ();
	//cout << A::mod(); 
	A::mod(a); 
	A::mod1(); 
	cout << "value of static z\n"<<A::z<<endl;
	cout << "value of static z\n"<<A::z<<endl;
	a.print ();
	cout << a.z<<endl;
	cout << a1.z<<endl;

}



