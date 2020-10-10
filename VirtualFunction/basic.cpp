#include <iostream>
using namespace std;

class A {
	public:
		virtual void fun ()
		{
			cout << "in class A fun ()\n"<<endl;
		}
		virtual void fun1 ()
		{
			cout << "in class A fun1 ()\n"<<endl;
		}
		void fun2 ()
		{
			cout << "in class A fun2 ()\n"<<endl;
		}

};
class B :public A{

	public :
		void fun ()
		{
			cout << "in class B fun ()\n"<<endl;
		}
		void fun1 (int a)
		{
			cout << "in class B fun ()\n"<<endl;
		}
		void fun2 ()
		{
			cout << "in class B fun2 ()\n"<<endl;
		}

};

int main ()
{
	A a,*bptr;
	B b;
	cout << "size of a \n"<< sizeof a<<endl;
	cout << "size of b \n"<< sizeof b<<endl;

	bptr =&a;
	bptr->fun(); //LB//A
	//bptr->fun1(5); //LB//A error
	bptr->fun1(); //LB//A
	bptr->fun2(); //EB//A


	bptr =&b;
	bptr->fun();//LB //B
	bptr->fun1();//LB// A
	//bptr->fun1(5);//EB //A --> in A we dont have function with arguments
	bptr->fun2();//EB  //A 

}


