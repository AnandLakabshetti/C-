#include <iostream>
using namespace std;

#define size 5
template <class A>
class stack {

	private:
		int top=-1;
		A arr[size];
	public:
		void push (A data)
		{
			if (top == -1)
			{
				top =0;
				arr[top]=data;
			}
			else if (top >= 0 && top <= size-1)
				arr[++top]=data;
			else 
				cout << "stack is full\n";
		}
		int  pop ()
		{
			A val;
			if (top == -1)
				cout <<"stack is empty \n"<<endl; 
			else 
				val=arr[top--];

			return val;
		}
		void print ()
		{
			int count =top;
			while (count >= 0)
			{
				cout <<" " <<arr[count--];
			}
			cout << "\n"<<endl;;
		}

};

int main ()
{

	stack <int> obj;
	obj.push(1);
	obj.push(2);
	obj.push(3);
	obj.print();

	stack <char> obj1;
	obj1.push('a');
	obj1.push('b');
	obj1.push('c');
	obj1.print();

	stack <float> obj2;
	obj2.push(2.4);
	obj2.push(3.5);
	obj2.push(4.6);
	obj2.print();

}
