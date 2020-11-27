/* Just like pair we can pair multiple object*/
/*tuple <int ,string , float > 
 * use make_tuple function to create the tuple*/

#include <iostream>
#include <tuple>
using namespace std;
int main ()
{

tuple <string,int , int> t1;
t1=make_tuple ("Rahul",12,24);

//cout<< get<0>(t1)<<endl;
cout<<std:: get<0>(t1)<<endl;
cout<<std:: get<2>(t1)<<endl;

}
