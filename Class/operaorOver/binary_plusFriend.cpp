#include <iostream>
using namespace std;
class A{

	int x,y;
	public :
	A() {}
	A(int a,int b):x(a),y(b) {}
	/*A operator+(A &obj)
	{
		A sum;
		sum.x=x+obj.x;
		sum.y=y+obj.y;
		return sum;
	}*/
	void print ()
	{
		cout << "in print \n"<<endl;
		cout << x <<" "<< y<<endl;
	}
friend A operator+(A&, A&);
};

A operator+(A &obj, A &obj2)
{
	A sum;
	sum.x=obj2.x+obj.x;
	sum.y=obj2.y+obj.y;
	return sum;
}


int main ()
{
	A obj1(1,2),obj2(11,22),obj3;
	//	obj3=obj1+obj2;  //this and below expression both are same

	obj3=operator+(obj2,obj1);
	obj3.print (); 

}
