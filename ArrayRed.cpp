#include <iostream>
using namespace std;
int main ()
{
int a[5]={1,2,3,4,4};

int (&p)[5]=a;
int i;
for(i=0;i<5;i++)
	cout << p[i]<< " "  ; 

cout << " "<<endl   ; 

}
