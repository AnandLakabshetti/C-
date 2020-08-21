#include <iostream>
using namespace std;
int a[] = {1,2,3,4,5};
int& modify (int index)
{
	return a[index];
}

int main ()
{
	int i;
	for (i=0;i<5;i++)
	modify (i)=a[i]+5;
	
	for (i=0;i<5;i++)
		cout << a[i]<< " ";

			cout <<endl;

}
