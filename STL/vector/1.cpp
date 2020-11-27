#include <iostream>
#include <vector>
using namespace std;

int main ()
{
vector <int > v{1,2,3};  //intialize the interger vector 
vector <float > f {1.3,2.5,3.7}; // initialize the float vector 
vector <string > s {"Anand ","Lakabshetti","Babalad"}; //Initialize the string vector 


vector <int > v1;///uninitialized vector with Zero size

vector <char > cv (5,'a');//initializes the all 5 elements to 'a'

vector <string > sv(3);//sv will have blocks to store the 3 strings 

vector <string > cv1 (2,"Anand");//initializes the all 5 elements to 'a'
int i;

for (i=0;i < v.size();i++){
	cout << v[i]<< endl;

for (i=0;i < f.size();i++)
	cout << f[i]<< endl;

for (i=0;i < cv.size();i++)
	cout << cv[i]<< endl;

for (i=0;i < s.size();i++)
	cout << s[i]<< endl;

for (i=0;i < sv.size();i++)
	cout << sv[i]<< endl;

for (i=0;i < cv1.size();i++)
	cout << cv1[i]<< endl;
}
}
