#include <iostream>
using namespace std;


class B;

class A
{
	public:
		void showB(B&);
};

class B {
	private :
		int a,b;
	public :
		void print ()
		{
			cout << "in class B print "<< a << " " <<b<<endl;
		}
		void setdata (int x,int y)
		{
			a=x,b=y;
		}
		friend void A::showB(B& b);
};
void A::showB(B& b)
{

	cout << "in class A print "<< b.a << " " <<b.b<<endl;
}


int main ()
{
	A aa;
	B bb;
	bb.setdata (1,2);
	aa.showB(bb);
}
