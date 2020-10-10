#include <iostream>
using namespace std;

template<class T>
class A
{
	private:
		T x,y;
	public:
		void setdata (T a,T b)
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
	A <int>a;
	A <char>a1;
	A <float>a2;
	a.setdata (1,2);
	a1.setdata ('1','2');
	a2.setdata (2.4,4.5);
	a.print ();
	a1.print ();
	a2.print ();
}


