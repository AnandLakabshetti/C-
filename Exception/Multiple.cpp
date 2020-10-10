#include <iostream>
using namespace std;
void fun ()
{
	int op;
	cout << "enter the option \n"<<endl;
	cin>>op;

		if (op==1)
			throw 'a';

		if (op==2)
			throw 1;

		if (op==3)
			throw 3.5;


}
int main ()
{
/* can write catch block which can handle all type of exception.
multiple catch blocks are possible but multiple throw not possible.
and default catch should be always at last */

	try{
		fun ();
	}
	catch (int a){
		cout << "in int \n"<<a<<endl;
	}

	catch (char a){
		cout << "in char \n"<<a<<endl;
	}

	catch (...){
		cout << "in default catch block \n"<<endl;
	}
}
