#include <iostream>
using namespace std;

int add (int a , int b, int c=0,int d=0)
{
return a+b+c+d;

}

int main (){

	cout << "add of 2 " << add (1,2) <<endl;
	cout << "add of 3 " << add (1,2,3) <<endl;
	cout << "add of 4 " << add (1,2,3,4) <<endl;


}
