#include <iostream>
using namespace std;


class A {
	public:
		A ()
		{
			cout << "constructor A \n"<<endl;
		}

		virtual ~A ()
		{
			cout << "Destructor A \n"<<endl;
		}
};
class B :public A
{
	public:
	B (){
		cout << "Constructor B \n"<<endl;
	}
	~B (){
		cout << "Destructor B \n"<<endl;
	}
};
class C :public B
{
	public:
	C (){

		cout << "Constructor C \n"<<endl;
	}
	~C (){

		cout << "Destructor C \n"<<endl;
	}
};
int main ()
{

C *cptr=new C;
	delete cptr;
}
