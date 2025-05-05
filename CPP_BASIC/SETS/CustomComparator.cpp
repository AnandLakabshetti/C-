#include<iostream>
#include<set>

using namespace std;
struct cmp{
    bool operator() (int a, int b) const {
        return a > b;
    }
};
int main (){
    set <int, cmp> s;
    s.insert(11);
    s.insert(1);
    s.insert(31);
    s.insert(41);
    s.insert(11);

    for (auto x: s)
    cout<<x<<endl;

}