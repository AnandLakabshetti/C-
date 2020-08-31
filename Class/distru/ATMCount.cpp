#include <iostream>
using namespace std;

class ATM{

	public :
		static int count;
		ATM()
		{
			count++;
		}
};
int ATM::count=0;
void ATM_fun()
{

	ATM temp;
}


int main ()
{
	char ch;
	do
	{

		ATM_fun ();
		cout << "do you want to access the ATM\n"<<endl;

		cin >>ch; 
	}while (ch =='Y' || ch =='y');

	cout << "ATM::count "<< ATM::count <<endl;

}
