#include <iostream>
using namespace std;
/*terminate handler function is a function automatically called when exception handling process has bo be left for some reason .*/
void my_exception()
{
	cout << "my exception\n"<<endl;
	exit (0);
}
void test()
{
	set_terminate (my_exception);
		cout << "test function \n"<<endl;
	throw 2;
}
int main ()
{

	try {
		test();
	}
	/*  if i use below catch function where int char a is there then it will be exception and my_exception will be called
	 *  */
	//catch (char a )
	catch (int a)
	{
		cout <<"in cathch int "<< a<<endl;
	}
}
