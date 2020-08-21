#include <iostream>
using namespace std;
namespace first {
	int x=10;
	int y=11;
	/*void fun (void )
	{
		cout << "first namespace " << x <<endl;
	}
*/
}
namespace second {
	int x=20;
	int y=21;
	/*void fun (void )
	{
		cout << "second  namespace " << x <<endl;
	}*/

}
int x=30;
void fun (void )
{
	cout << "fun function " << endl;
}

int main ()
{

	
	using first::x;
	//using namespace first; this will give ambuguity 
	//using first::x;
	cout << "x" << x<<endl;
	fun ();

	using second::y;

	cout << "y" << y <<endl;
	fun ();


}
