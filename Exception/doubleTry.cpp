#include <iostream>
using namespace std;

void fun ()
{

	cout << "in fun \n"<<endl;
	try
	{
		throw std::string ("exception \n");
	}
	catch (string p)
	{
		cout << "in catch of fun \n"<<endl;
		throw 10;
	}
}


int main ()
{

	try
	{
		fun ();
	}
	catch (int a)
	{
		cout <<"in main catch \n"<< a<<endl;
	}
}
