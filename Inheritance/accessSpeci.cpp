#include <iostream>
using namespace std;

class array {

	private :
		int arr[5];
	public :
		void insert (int index, int value)
		{
			arr[index] = value;
		}

};

class stack:protected array
{
	public:
		int top =0;
		void 	insertstk(int val)
		{
			top++;
			insert(top,val);
		}

};
int main ()
{
	stack s;
	s.insertstk(5);
//	s.insert(3,5);

	/* in this example if we keep access specifiar as protected in an array class  and protected in inherited class then we cannot access the 
	 * insert function directly using the stack object */

	/* in this example if we keep access specifiar as public in an array class  and protected in inherited class then we cannot access the 
	 * insert function directly using the stack object */

	/* in this example if we keep access specifiar as public in an array class  and private in inherited class then we cannot access the 
	 * insert function directly using the stack object */
	/*protected , protected 
	protected , public
	public, protected 
	public , private  
to avoid the direct access of array class funtion using stack object
*/
}



