#include <iostream>
#include <vector>
using namespace std;

int main ()
{
	/* Capacity  of the vector array double when it reaches the max size and when we try to add new element.*/

	vector <int > v{1,2,3};  //intialize the interger vector 
	vector <float > f {1.3,2.5,3.7}; // initialize the float vector 
	vector <string > s {"Anand ","Lakabshetti","Babalad"}; //Initialize the string vector 

	/* Push an element to the back of the vector */
	cout << "\n capacity of the V = "<< v.capacity()<<endl;
	cout << "\n size of the V before pushing an element "<< v.size()<<endl;
	v.push_back (11);
	cout << "\nCapacity  and size of the v after shrink to fit is -"<<v.capacity()<<" "<< v.size()<<endl;
	f.shrink_to_fit();
	cout << "\nCapacity  and size of the v after shrink to fit is -"<<v.capacity()<<" "<< v.size()<<endl;
	//v.insert(v.begin(), 5);
	cout << "\nsize of the V After pushing an element "<< v.size()<<endl;
	/* resize the vector */
	cout << "\ncapacity of the V = "<< v.capacity()<< " \n size -"<<v.size()<<endl;
	v.resize(2);
	cout << "\n capacity of the V after resize = "<< v.capacity()<< " size -"<<v.size()<<endl;
	
	v.pop_back ();
	cout << "\nv.at(2)"<<v.at(0)<<endl;
	cout << "\n capacity of the V = "<< v.capacity()<< "\n size-"<<v.size()<<endl;
	cout << "\nCapacity  of the f is -"<<f.capacity()<<endl;
	cout << "\nSize of the f is -"<<f.size()<<endl;
	/* clear the f and check the size and capacity */
	f.clear();
	cout << "\nSize of the f After clear is -"<<f.size()<<endl;
	cout << "\nCapacity  of the f is -"<<f.capacity()<<endl;
	f.shrink_to_fit();
		cout << "\nCapacity  and size of the f after shrink to fit is -"<<f.capacity()<<" "<< f.size()<<endl;
	vector <int >::iterator p=v.begin ();

/*		while (p != v.end ()){
			cout <<*p<<endl;
			p++;
		}
*/
/*
	for (;p != v.end ();++p)
		cout <<*p<<endl;
		}
*/
