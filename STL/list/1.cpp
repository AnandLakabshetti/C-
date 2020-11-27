/* List class supports*/

#include <iostream>
#include <list>
using namespace std;
int main ()
{
	list <int > l1;
	list <int > l2{1,2,3}; 
	list <string > l3{"Anand","Lakabshetti"};
	list <int>::iterator it=l2.begin ();

	while (it != l2.end ()){
		cout <<*it<<endl;
		*it=*it+1;
		it++;
	}
	it = l2.begin ();
	while (it != l2.end ()){
		cout <<*it<<endl;
		//it=*it+1;
		it++;
	}


}

