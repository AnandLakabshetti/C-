#include<iostream>
#include<map>

using namespace std;

int main (){
map <int, string> student= {{2,"Anand2"}, {3, "Anand3"}};

map <int, string> m1 {{2,"Anand2"}, {3, "Anand3"}}; //this is also allowed and more widely used.
student.insert({1,"Anand"});

/* The map automatically sorts the keys in ascending order.*/
for (auto x: student)
    cout<<x.first<<" "<<x.second<<endl;

for (auto x: m1)
    cout<<x.first<<" "<<x.second<<endl;
}