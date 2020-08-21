#include <iostream>
using namespace std;

int main ()
{
	int x;
cout << "enter the data in different format " <<endl;
cin >> x;
int &r=x;


cout << "r in dec "<< r<<"address of r" << &r<<endl;
cout << "x in dec "<< x<<"address of x " << &x<<endl;
cout << "x in dec "<< x<<endl;
cout << "x in oct "<<oct<< x<<endl;
cout << "x in oct "<<hex<< x<<endl;



}
