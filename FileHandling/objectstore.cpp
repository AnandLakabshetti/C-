#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class book{
	public:
		char name [100];
		int price;
	public:
		book ()
		{
			strcpy (name,"No TITLE\n");
			price =0;

		}
		void getdata()
		{

			cin.ignore();//to empty the input buffer 
			cout << "enter the data as name and price \n"<<endl;
			cin>>name;
			cin.ignore();//to empty the input buffer 
			cin>>price;
			cin.ignore();//to empty the input buffer 
		}
		void showdata ()
		{
			cout <<"\nname "<< name << "\nprice  "<<price<<endl; 
		}
		void readclassfile()
		{
			ifstream fin;
			fin.open ("file.dat",ios::in|ios::binary);
			if (!fin)
			{
				cout <<" file not found \n"<<endl;
			}
			else{
				fin.read((char *)this , sizeof (*this));
				while (!fin.eof ()) {
					fin.read((char *)this , sizeof (*this));
					showdata ();
				}
			}
		}
		int storebook();
};
int book ::storebook ()
{
	if (price == 0){
		cout << "price is not defined \n"<<endl;
		return 0;
	}
	else {
		ofstream fout;
		fout.open ("file.dat",ios::app);
		fout.write((char *)this ,sizeof (*this));

		fout.close ();
	}
}

int main ()
{

	book b,b1;
	b.getdata();
	b.showdata();
	b.storebook();
	b.storebook();
	cout << "BEFORE CALLING THE READ\n"<<endl;

	b.readclassfile();

}
