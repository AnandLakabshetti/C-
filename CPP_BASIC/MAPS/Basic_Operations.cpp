#include<iostream>
#include<map>

using namespace std;

int main (){
map <int, string> m1= {{2,"Anand2"},{4, "shiva"},{3, "Anand3"}};


/* The map automatically sorts the keys in ascending order.*/

//this will print the value of kay 2, if key does not present then emply string will be return.

cout<<m1[2]<<endl;
cout<<m1.at(2)<<endl;  //above  line this both are same.

//update 
m1[2] = "hello";


//finding a elements:
auto it = m1.find (2);
if (it != m1.end())
cout<<"Found key:"<<it->first<<" "<<it->second<<endl;
else
cout <<"key not found"<<endl;


//traversing map
cout<<"Traversing the map\n";
for (auto it = m1.begin(); it != m1.end(); ++it){
    cout<<it->first<<" "<<it->second<<endl;
}

//below range based loop also used for iterator, as it is simple and easy but we cannot delete/modify using this.
// for (auto x: m1){
//     cout<<x.first<<" "<<x.second<<endl;
// }

/* Delete Element*/
//using key
m1.erase(2);

//using iterator
m1.erase(m1.begin()); ///first element will be deleted.


for (auto x: m1){
    cout<<x.first<<" "<<x.second<<endl;
}

if (m1.size() != 0)
cout<<m1.size()<<endl;

if (!m1.empty())
cout<<"Not empty"<<endl;
}