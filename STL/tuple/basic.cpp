#include <iostream>
#include <tuple>
using namespace std;

int main ()
{
tuple <int , int , string , float> tp;
tp=make_tuple (1,2,"Anand",99.99);

cout << get<1>(tp)<<endl;
get<1>(tp)=11;
cout << get<1>(tp)<<endl;

/* Size of the tupe will be find by using below function  */
cout<<tuple_size<decltype (tp)>::value<<endl;
}
