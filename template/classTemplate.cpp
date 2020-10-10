#include <iostream>
using namespace std;

//template <class X> class 

template <class X> class ArrayList{

	private:
		struct controlBlock{

			int capacity;
			X *arr_ptr;
		};
		controlBlock *s;
	public:
		ArrayList(int capacity)
		{
			s=new controlBlock;
			s->capacity=capacity;
			s->arr_ptr=new X [s->capacity];
		}
		void AddElement(int index,X data)
		{
			if (index >=0 && index <= (s->capacity-1))
				s->arr_ptr[index]=data;
			else
				cout << "array index is not valid\n"<<endl;
		}
	void ViewElement(int index, X &data)
	{
		if (index >= 0 && index <=s->capacity-1)
			data = s->arr_ptr[index];
		else
			cout<< "array index is  not valid \n"<<endl;
	}

	void viewlist()
	{
		int i;
		for (i=0;i<s->capacity;i++)
			cout << " "<<s->arr_ptr[i]<<endl;

	}

};

int main ()
{
ArrayList <int>list1(4);
ArrayList <float>list2(4);
list1.AddElement(0,4);
list2.AddElement(0,4.5);
list1.AddElement(1,5);
list2.AddElement(1,5.7);
list1.AddElement(2,6);
//list1.ViewElement(2);
list1.viewlist();
list2.viewlist();

}
