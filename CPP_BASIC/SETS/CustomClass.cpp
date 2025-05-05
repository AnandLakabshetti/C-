#include<iostream>
#include<set>

using namespace std;
class Student{
    int rollno;
    string name;
    public:
    
    Student(int roll, string s){
            rollno= roll;
            name = s;
    } 
    bool operator<(const Student &ob) const{
        return rollno < ob.rollno;
    }
    /* since rollno and name are privayte, using get functions, const beciause we are not intended to modif*/
    int getroll() const {
        return rollno;
    }
    string  getname() const {
        return name;
    }
    /* here ostream object should not be const*/
    friend ostream& operator <<( ostream &ob, const Student &S);
    
}; 
ostream & operator <<( ostream &ob,  const Student &S){
    ob << S.getroll();
    ob << S.getname();
    
    return ob;    
}
int main (){

set <Student> s;
s.insert(Student(11,"Anand"));
s.insert(Student(15,"Anand2"));
s.insert(Student(12,"Anand5"));

for (auto x:s){
    cout<<x<<endl;
}
}