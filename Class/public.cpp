#include <iostream>
using namespace std;

struct st{

	/*protected :   //if x is in protected and try to access then it will an error as x is protected 
		int x;*/
	public:
		int x;
};
int main ()
{
	struct st a;
	a.x= 11;
	cout << "a.x" << a.x<<endl;

}
