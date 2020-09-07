#include <iostream>
using namespace std;
class A{

	int x,y;
	public :
	A() {}
	A(int a,int b):x(a),y(b) {}
	A operator+(A &obj)
	{
		A sum;
		sum.x=x+obj.x;
		sum.y=y+obj.y;
		return sum;
	}
	void print ()
	{
		cout << "in print \n"<<endl;
		cout << x <<" "<< y<<endl;
	}

};

int main ()
{
	A obj1(1,2),obj2(11,22),obj3(22,33) ,obj4(4,5),obj5;
//	obj3=obj1+obj2;  //this and below expression both are same

	obj5=obj4+obj1+obj3+obj2;
	//obj3=obj1.operator+(obj2);
	obj5.print (); 

}
