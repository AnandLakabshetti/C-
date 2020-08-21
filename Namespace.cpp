#include <iostream>
using namespace std;
namespace first {
	int x=10;
	void fun (void )
	{
		cout << "first namespace " << x <<endl;
	}

}
namespace second {
	int x=20;
	void fun (void )
	{
		cout << "second  namespace " << x <<endl;
	}

}
int x=30;
void fun (void )
{
	cout << "fun function " << endl;
}

int main ()
{

	int x=40;
	cout << "x = " << x<<endl;
	cout << "first ::x = " <<first:: x<<endl;
	cout << "second ::x = " <<second:: x<<endl;
	//cout << " ::x = " <<second:: x<<endl;
	fun ();
	first :: fun ();
	second :: fun ();

}
