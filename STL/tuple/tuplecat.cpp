#include <iostream>
#include <tuple>
using namespace std;
int main ()

{
tuple <int ,int ,char> c;
c=make_tuple(1,3,'a');

tuple <int ,int ,char> c1;
c=make_tuple(2,4,'b');


//tuple <int ,int ,char> new1;
auto new1=tuple_cat(c,c1);
}
