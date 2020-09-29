#include <iostream>
using namespace std;

class A
{
	private :
		int x,y;

		A():x(12),y(22)
		{
			cout <<"in private constructor \n"<<endl;
		}
		~A()
		{
			cout <<"in private destructor\n"<<endl;
		}

		void print ()
		{
			cout << "print "<< x << " "<< y<<endl;
		}
	public :
		static void static_fun (void )
		{
			A temp_obj;
			temp_obj.print();
		}
};
int main ()
{
	A::static_fun();


}
