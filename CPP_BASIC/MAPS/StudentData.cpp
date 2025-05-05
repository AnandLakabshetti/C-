#include<iostream>
#include<map>

using namespace std;
class student {
    int rollno;
    string name;
    public:
    student(int i, string s):rollno(i), name(s){}

    friend ostream& operator<<(ostream &ob, student &s);
};
ostream& operator<<(ostream &ob, student &s){
    ob<<s.rollno<<" ";
    ob << s.name;
    return ob;
}
int main ()
{

    map <int, student> st;

    st.insert({15, student(1, "Anand")});
    st.insert({12, student(2, "Anand2")});
    st.insert({14, student(3, "Anand3")});
    st.insert({11, student(4, "Anand3")});

    for (auto x: st){
        cout<<x.first<<" "<<x.second<<endl;
    }
}