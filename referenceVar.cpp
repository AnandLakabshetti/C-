#include <iostream>
using namespace std;

int main ()
{
int a=11;
int &r=a;
int *p=&a;

cout << "welcome to program" <<endl;

cout << "a" << a << endl;
cout << "&a" << &a << endl;
cout << "&r" << &r << endl;
cout << "&p" << &p << endl;

}
