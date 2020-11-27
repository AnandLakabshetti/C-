#include <iostream>
#include<tuple>
using namespace std;

int main ()
{

	tuple <int , int ,string > c;
	c=make_tuple(11,22,"Anand");

	tuple <int , int ,string > d;
	d=make_tuple(111,222,"Anand1");


	cout << get<0>(d)<<endl;
	cout << get<0>(c)<<endl;
	d.swap(c);
	cout << get<0>(d)<<endl;
	cout << get<0>(c)<<endl;

}
