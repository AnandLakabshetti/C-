#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	string word;
	ofstream fout;//create an stream for output 
	ifstream fin;//create an stream for input

	/* if file is not available then it will be created */
	fout.open ("data.txt" ,ios::binary);
//	fout.open ("data.txt",ios::out); //above line and this line same meaning 
//	fout.open ("data.txt",ios::app); //to append the data it will not truncate 
//	fout.open ("data.txt",ios::app:ios::binary); //to append  with binary mode  
//
	fout<<"hello \n Anand";
	fout.close ();

	fin.open ("data.txt");  //attach the input object with file for operation 
	while (fin>>word){
	/*now here the fin is associate with file and cin is associated with keyboard*/
	cout << word<<endl;
	}
	fin.close ();
}
