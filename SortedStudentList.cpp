#include<iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class student {
    private:
    int rollno;
    string name;
    public:
    student (int roll, string nme){
        rollno = roll;
        name = nme;
    }

    void display (){
        cout<<"rollno:"<<rollno<<"name:"<<name<<endl;
    }
    /* operator< () function can be defined as friend as well as member function
    if we do not use const then compiler will generate error, 
    it expect functin should not modify the value while doing the comparision.
    same applicable to member function as well, thats the reason member function marked as const.

    comparison method:

    Default ascending order: this->rollno < obj.rollno sorts in ascending order of rollno. this is conventional.

    Reversed descending order: obj.rollno < this->rollno sorts in descending order of rollno.
    */
    // friend bool operator<(const student &obj, const student &ob);
bool operator<(const student &obj) const{
    return  this->rollno < obj.rollno;
}
int getrollno(){
    return rollno;
}
};
vector<student>  FindClosest (set<student> &s, int count, int target){
    vector<pair<int, student>> result;
    for (auto x: s){
        int res =  abs(x.getrollno() - target);
        result.push_back({res, x});
    }
    sort (result.begin(), result.end());

    vector <student > nw;

    for (int i=0; i< min ((int)result.size(), count); ++i)
    nw.push_back(result[i].second);


    return nw;
}

// bool operator<(const student &obj, const student &ob){
//     return obj.rollno < ob.rollno;
// }
int main (){
set <student> s;
s.insert(student(11,"Anand"));
s.insert(student(10,"Anand1"));
s.insert(student(15,"shiva"));
s.insert(student(20,"deva"));
s.insert(student(13,"abhay"));

for (auto x : s){
    x.display();
}


int search;

cout<<"enter the for which you wnat to find the closes numbers\n"<<endl;
cin>>search;

auto rslt = FindClosest(s,search, 3);

for (auto& st : rslt) {
    st.display();
}
}