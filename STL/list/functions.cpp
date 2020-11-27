#include <iostream>
#include <list>
using namespace std;
int main ()
{
	list <int > l {11,3,77,44,2};

	list <int>::iterator it=l.begin();

	for (;it !=l.end ();it++ )
		cout << " "<< *it;

	cout <<"\n"<<endl;

	l.sort ();
	it = l.begin ();
	cout << "Size is -"<<l.size() <<endl;
	for (;it !=l.end ();it++ )
		cout << " "<< *it;

	l.push_back(111);
	l.push_front(1);


	cout <<endl;

	it = l.begin ();
	for (;it !=l.end ();it++ )
		cout << " "<< *it;
	int i;
	
		cout << "\n Size  "<< l.size();
	l.pop_back();
		cout << "\n Size "<< l.size();

}
