#include <iostream>
using namespace std;

template<class T ,class T1>
class A
{
	private:
		T x;
		T1 y;
	public:
		void setdata (T a,T1 b)
		{
			x=a,y=b;
		}
		void print ()
		{
			cout << "X -"<<x<<"Y-"<<y<<endl;
			cout << "\n"<<endl;
		}

};
int main ()
{
	A <int ,char >a;
	A <char ,char >a1;
	A <float ,char >a2;
	a.setdata (1,'c');
	a1.setdata ('d','2');
	a2.setdata (2.4,'z');
	a.print ();
	a1.print ();
	a2.print ();
}


