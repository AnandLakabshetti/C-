#include <iostream>
using namespace std;
int main ()
{
	int x,y,z;
	cout << "Enter the value of X"<<endl;
	cin >>x;

abc:
	cout << "enter the value of y\n"<<endl;
	cin>>y;
	try{

		if (y==0)
			throw std ::string ("divid by zero exception \n");
		else
			z=x/y;
	}
	catch(string p)
		//	catch(...)
	{
		cout << "in catch block p="<<p<<endl;
		cout <<"\n"<<endl;
		goto abc;
	}
	cout <<"z-"<<z<<endl;
	cout << "\n"<<endl;
}



