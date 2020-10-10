#include <iostream>
using namespace std;

int divi (int a,int b)
{
	cout<<"in divin"<<endl;
	int z;
	if (b==0)
		throw ("divid by zero exception \n");
	else
	 return a/b;

	
}
int main ()
{
	int x,y,z;
	cout << "Enter the value of X"<<endl;
	cin >>x;

abc:
	cout << "enter the value of y\n"<<endl;
	cin>>y;
	try{
		z=divi(x,y);
	}
	catch(const char *p)
	{
		cout << "in catch block p="<<p<<endl;
		cout <<"\n"<<endl;
		goto abc;
	}
	cout <<"z-"<<z<<endl;
	cout << "\n"<<endl;


}



