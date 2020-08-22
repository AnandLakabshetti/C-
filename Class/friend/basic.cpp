#include <iostream>
using namespace std;

class fd {

	private:
		int x,y;
		friend int main ();

};

int main ()
{
	fd A;
	A.x=10;
	A.y=11;

	cout << "A.x"<< A.x << "A.y"<<A.y<<endl;

}

