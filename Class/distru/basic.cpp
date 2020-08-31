#include <iostream>
using namespace std;

class A{

	int *ptr;
	public :
	A ()
	{
		cout << "in the contructor \n"<<endl;
		ptr = new int [3];
		cout << ptr <<endl;
	}

	~ A ()
	{
		cout << "destructor function\n"<<endl;
		delete []ptr; ///freeing the dynamically allocated memory.
	}
};


int main ()
{
	{	
	
	A a;
	}
	A b;

}
