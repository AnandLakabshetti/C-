/*  Pair in STL
 *pair is a template class in standard template library , but it is not a part of container.
 pairs like name ->address, name->rollNo,country->capital to store such data we use the pair.
 *  */
#include <iostream>
using namespace std;
int main ()
{
pair <string , int > p;
p=make_pair("Anand ",25);
cout << p.first<<p.second<<endl;

}
