#include <iostream>
using namespace std;

class Grandpa {

	public :
		int a,b;

		Grandpa ()
		{	
			cout << "in constructor of class Grandpa\n"<<endl;
		}
};
class father:public Grandpa
{
	public:
	father()
	{
		cout << "in constructor father\n";
	}
};

class child:public father
{
	//public:
	/*protected:
	car ()
	{

		cout << "in constructor car\n";
	}
*/
};
int main ()
{
	child c;

}



