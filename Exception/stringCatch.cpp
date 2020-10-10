#include <string>
#include <iostream>
using namespace std;

int main()
{

	char input='N';

	cout << "\n\nWould you like to input? (y/n): ";
	//cin >> input;
//	input = tolower(input);


	try
	{
		if (input != 'y')
		{
			throw std ::string ("exception ! error");
		}
	}
	catch (string e)
	{
		cout << e << endl;
	}
}
