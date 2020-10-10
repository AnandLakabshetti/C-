#include <iostream>
using namespace std;

template<class T ,class T1>
class A
{
	private:
		T x;
		T1 y;
	public:
		A(T a,T1 b);
		void print ()
		{
			cout << "X -"<<x<<"Y-"<<y<<endl;
			cout << "\n"<<endl;
		}
};
template<class T ,class T1>
A<T,T1>::A(T a,T1 b)
{

	x=a,y=b;
}

int main ()
{
	A <int ,char >a(1,'2');
	A <char ,char >a1('d','2');
	A <float ,char >a2(2.4,'y');

	a.print ();
	a1.print ();
	a2.print ();
}


