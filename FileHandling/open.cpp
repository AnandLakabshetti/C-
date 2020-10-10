#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	string word;
	ofstream fout;//create an stream for output 
	ifstream fin;//create an stream for input

	/* if file is not available then it will be created */
	fout.open ("data.txt");
	fout<<"hello\n";
	fout.close ();

	fin.open ("data.txt");  //attach the input object with file for operation 
	fin>>word;
	/*now here the fin is associate with file and cin is associated with keyboard*/
	cout << word<<endl;
	fin.close ();
}
