#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Student{
    int rollno;
    string name;
    public:
    Student(int value, string msg):rollno(value), name(msg){};

    void display (void);
    int getrollno (){
        return rollno;
    }
};
void Student::display(void){
    cout<<"rollno: "<<rollno<<" name:"<<name<<endl;
}
void DisplayVector(vector <Student> &v){
    for (auto x: v){
        x.display();
    }
}
void DeleteStudentRecord (vector<Student> &v, int rollno){
    for (auto it=v.begin(); it != v.end(); ++it){
        if (it->getrollno() == rollno){
            v.erase(it);
            break;
        }
    }   
}

void SearchStudent (vector<Student> &v, int rollno){
    auto it=v.begin();
    for (;it != v.end(); ++it){
        if (it->getrollno() == rollno){
            cout<<"Rollno Found\n"<<endl;
            it->display();
            break;
        }
    }   
    if (it == v.end()){
        cout<<"Record not found\n";
    }
}
void updateRecord (vector<Student>&v, int rollno){
    /* 
    search the rollno which you want to update.
    if found then update the records of that rollno using it.rollno

    we can use it=v.begin or auto &x : v both 
    */
}
int main (){

    vector<Student> students;
    int option, id, rollno,rollnodelete, rollnosearch, updaterollno;
    string name;
    while (1){
    cout<<"\nSelect you option\n"<<endl;
    cout<<"\n\t 1.Add student details \n\t 2.delete record \n\t 3.search record \n\t 4.update record\n\t 5.Exit \n";
    cin>>option;
    switch (option)
    {
    case 1:
        cout<<"Enter the student details";
        //cin.ignore();
        cin>>rollno>>name;
        students.push_back(Student(rollno, name));
        DisplayVector(students);
        break;
        case 2:
        cout<<"Enter the student rollno which you want to delete";
        cin>>rollnodelete;
        DeleteStudentRecord(students, rollnodelete);
        DisplayVector(students);
        break;
        case 3:
        cout<<"Enter the rollno to be searched";
        cin>>rollnosearch;
        SearchStudent(students,rollnosearch);
        DisplayVector(students);
        break;        
        case 4:
        cout<<"Enter the student rollno which record you want to update";
        //cin.ignore();
        cin>>updaterollno;
        updateRecord(students, updaterollno);
        break;
        case 5:
        cout<<"You have selected the Exit option\n";
        exit (0);
        break;    
    default:
        break;
    }
    }
}