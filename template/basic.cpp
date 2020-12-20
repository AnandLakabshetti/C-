#include <iostream>
using namespace std;

	template <class X ,class Y> 
Y large (X a, Y b)
{
	if (a>b)
		return a;
	else 
		return b;

}


int main ()
{
	cout << large (1,1.1)<<"\n"<<endl;
	cout << large (1.2,2.4)<<"\n"<<endl;


}
