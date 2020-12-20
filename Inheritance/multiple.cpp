#include <iostream>
using namespace std;

class vehicle {

	public :
		int a,b;

		vehicle ()
		{	
			cout << "in constructor of class vehicle\n"<<endl;
		}
};
class fourwheelar
{
	public:
		fourwheelar()
		{
			cout << "in constructor 4  wheelar\n";
		}
};

class car:public vehicle ,public fourwheelar
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
	car c;

}



