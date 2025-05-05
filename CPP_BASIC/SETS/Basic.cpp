#include<iostream>
#include<set>

using namespace std;

//set are immutable after insertion

int main (){
    set <int> s1;//creating empty set
    set <int> s ={2,6,1,0};//initialization of set.


    /* Basic operations*/

    //insert element, here emplace is more efficient than insert as it do not use tmp space.
    //use insert if you have readily available object, otherwise use emplace.
    s.insert(10);
    s.emplace(5);

    //We cannot change the value of elements once they are stored in the set.
    //so how to modify values of set is, erase and then insert.

    s.erase(2);
    s.insert(22);


    // finding element:
    auto it = s.find(5);
    if (it != s.end()){
        cout<<"found element:"<<*it<<endl;
    }
    
    //for deleting element
    s.erase(it); //deleting by iterator
    s.erase(22); //deleting by element

    for (auto it= s.begin(); it != s.end(); ++it){
        cout<<*it<<endl;
    }

    for (auto x:s){
        cout<<x<<endl;
    }

    //reverse printing
    cout<<"revert Printing\n";
    for (auto rit= s.rbegin(); rit != s.rend(); ++rit){
        cout<<*rit<<endl;
    }

}