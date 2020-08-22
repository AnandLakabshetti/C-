#include <iostream>
using namespace std;

class A {
	private :
		int x,y;
	public:
		void setdata(int x,int y)
		{
			//x=x,y=y;  ///we will get invalid results for this 
			this->x=x, this->y=y;

			///we can do like A::x=x, A:: this will give valid result 
		}
		A modify()
		{
			x=222,y=333;
			return *this;
		}

		void print ()
		{

			cout << "in print function" <<" "<< x<< " " <<y<<endl;
		}

};

int main ()
{
	A a,a1;
	a.setdata (1,2);

	a.print ();
	a=a1.modify();
	a.print ();
	

	/*  
	    this =&obj;
	 *this = obj;
	 this->x=(&obj)->x;
	 (*this).x=obj.x;

 *  */



}
