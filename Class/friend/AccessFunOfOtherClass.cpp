#include <iostream>
using namespace std;

class A;
class B
{
	public:
		void setdata (A&, int ,int);
		void print (A &);


};
class A{

	private :
		int x,y;
		friend void B::setdata(A&, int ,int );
		friend void B::print (A&);
};
void B:: setdata (A& ob, int a,int b)
{
	ob.x=a;
	ob.y=b;
}
void B :: print (A& ob)
{
	cout << "value of x and y " << ob.x << " "<<ob.y <<endl;
}

int main ()
{
	A a;
	B b;

	b.setdata (a,1,2);
	b.print (a);

}
