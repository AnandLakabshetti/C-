#include <iostream>
#include <array>

using namespace std;

int main()
{
	array <int , 5> a{1,2,3,4,6}; //initialize the array 
	array <int , 5> a1;
	a1.fill(11); //fill all elements of the array with value '11'
	a1[2]=12;  //Asign a value 
	int i;
	
	cout << "\n a.size()-"<<a.size()<<endl;
	for (i=0;i<4;i++)
		cout << a1.at(i) <<endl;

	cout << "\na.front()- "<<a.front()<<endl;
	cout << "\na.back()- "<<a.back()<<endl;

	a.swap(a1);

	for (i=0;i<5;i++){
		cout << " a1-"<< a1.at(i) <<endl;
		cout << "a-"<<a.at(i) <<endl;
}

	//cout << a.end ();
	//cout << a.front ();
}

