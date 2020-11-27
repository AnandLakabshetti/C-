#include <iostream>
#include <map>
using namespace std;
int main ()
{
	map <int , string > customer;
	customer[100]="Anand";
	customer[123]="Anand1";
	customer[145]="Anand2";
	customer[167]="Anand3";

	map <int , string > c{{10, "Anand"},{11,"Bharat"},{12, "My village"}};

	map<int , string > ::iterator i=customer.begin ();

	for (;i!= customer.end ();i++)
		cout <<i->second<<endl;

	i=c.begin ();

	for (;i!= c.end ();i++)
		cout <<i->second<<endl;

	cout <<customer.at(100)<<endl;
	cout <<customer[123]<<endl;
	cout <<c.at(12)<<endl;
	cout << "size of map " << c.size ()<<endl;
	cout << "map is empty or not  " << c.empty ()<<endl;

	c.insert(pair<int,string>(200,"you"));

	i=c.begin ();
	for (;i!= c.end ();i++)
		cout <<i->second<<endl;


}
