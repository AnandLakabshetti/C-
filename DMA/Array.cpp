#include <iostream>

using namespace std ;

int main ()
{

int *ptr = new int[10];

int i;

for (i=0;i<10;i++)
	ptr [i] =i;
for (i=0;i<10;i++)
	cout <<" "<< ptr [i]<<endl;

delete [] ptr;
}
