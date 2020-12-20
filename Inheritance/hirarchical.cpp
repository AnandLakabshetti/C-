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
class fourwheelar:public vehicle
{
	public:
		fourwheelar()
		{
			cout << "in constructor 4  wheelar\n";
		}
};
class car:public vehicle 
{
	//public:
	/*protected:
	  car (car & a)
	  {

	  cout << "in constructor car\n";
	  }
	  */
};
int main ()
{
	car c;
	car c1=c;//-->c1.car (c);
	fourwheelar f;
	car *p=new c;
}



