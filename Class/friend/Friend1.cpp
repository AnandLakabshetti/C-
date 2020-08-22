#include <iostream>
using namespace std;
class A {
	public:
		int x,y;
		friend void setdata (A &);
		friend void print (A &);
};
void setdata (A &ob)
{
	cout << "in setdata funtion "<<endl;
	ob.x=11,ob.y=21;

}

void print (A &ob)
{

	cout << "in print funtion "<<endl;
	cout << "x" << ob.x << "y" << ob.y<<endl;
}

int main ()
{

	A aa;
	setdata (aa);
	print (aa);



}
