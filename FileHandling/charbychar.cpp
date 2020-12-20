#include <iostream>
#include <fstream>
using namespace std;
int main ()
{

	ifstream fin ;
	fin.open ("data.txt");
	char ch;
	/*> " (extraction operator) this operator consideres the space as an delimeter/special character 
	  to avoid such things use fin.get() which returns the character */


	//while (fin>>ch)
	/* make use of fin.eof function also for better underastanding*/


	while ((ch =fin.get()) != EOF)
	{

		//	ch =fin.get();
		cout << ch ;
		//cout << "\n"<<endl;
	}

}
