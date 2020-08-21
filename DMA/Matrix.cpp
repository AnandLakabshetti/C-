#include <iostream>
using namespace std;


int main ()
{

	int **p,**q,**r;
	int i,j,c1,r1, a,b,k;
	cout << "enter the row number for array 1 "<<endl;
	cin >> r1;

	cout << "enter the col number for array 1"<< endl;
	cin >> c1;

	cout << "enter the row number for array 2 "<<endl;
	cin >> a;

	cout << "enter the col number for array 2"<< endl;
	cin >> b;


	p = new int *[r1];
	q = new int *[a];

	r = new int *[r1];

	cout << "r " << r1<< "c" << c1<<endl;

	for (i=0;i<r1;i++){
		p[i] = new int [c1];
		q[i] = new int [b];
		r[i] = new int [b];
	}

	cout << "enter the numbers for first array "<< endl;
	for (i=0;i<r1;i++)
		for (j=0;j<c1;j++)
			cin >> p[i][j]; 

	cout << "enter the numbers for second  array "<< endl;
	for (i=0;i<a;i++)
		for (j=0;j<b;j++)
			cin >> q[i][j] ;



	if (r1 == a && c1 == b){
		for (i=0;i<r1;i++)
			for (j=0;j<c1;j++)
			{
				r[i][j]=0;

				for (k=0;k<a;k++)
					r[i][j]=r[i][j] + p[i][k] * q[k][j];
			}	


		cout << " multiplication of Two matrix \n" << endl;


		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
				cout << " "<< r[i][j];

			cout << endl;
		}
	}else 
		cout << "multiplication is not possible " << endl;
}





