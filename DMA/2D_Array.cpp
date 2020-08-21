#include <iostream>
using namespace std ;

int main ()
{

	int r=2, c=3,i,j;
	int **ptr;
       	ptr = new int *[r];

	for (i=0;i<r;i++)
		ptr[i] = new int [c];

	for (i=0;i<2;i++)
		for (j=0;j<3;j++)
			ptr[i][j] = i+j;


	for (i=0;i<2;i++)
		for (j=0;j<3;j++)
			cout << ptr[i][j]<< endl;

for (i=0;i<2;i++)
	delete[] ptr[i];

delete []ptr;

}

