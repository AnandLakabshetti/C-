#include <iostream>
using namespace std;

class A {

	public:
	virtual void test ()
		{
		cout << "class A test \n"<<endl;
		}

};
class B:public A
{

	public:
	void test ()
		{
		cout << "class B test \n"<<endl;
		}

};

int main ()
{
	A a,*p;
B b;
/* while doing a early binding i.e compile time binding compliler will see the type of the object and then finds the defination for the fun call*/
b.test();    // B ->default it will take the local scope 
b.A::test(); // A ->explicitely we need to mention if we want to use base class her function call 

p=&b;

/* to avoid the error caused by function overriding as it points to base class when we use pointer i.e it takes the early binding 
 * so we use virtual function to avoid early binding and use run time binding i.e late binding */ 
p->test(); ///here it will go to class A rather then class B , bcoz it check the type of pointer and calls the fun, To avoid this we can use virtual function 
}

