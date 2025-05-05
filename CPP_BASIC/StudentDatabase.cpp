#include<iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    string name;
    static int AdminNo;

Student(string n){
    AdminNo++;
    rollNo=AdminNo;
    name = n;
}
static int getAdminNo(){
    return AdminNo;
}
void display (){
    cout<<"Name:"<<name<<"rollno:"<<rollNo<<endl;
}
};
int Student::AdminNo=0;
int main (){

    Student s1("Anand");
    Student s2("Ram");
    Student s3("Arun");
    s1.display();
    s2.display();

    cout<<Student::AdminNo<<endl;
}
