    #include<iostream>
    #include<string>
    #include<vector>
    using namespace std;
    class ToDo{
        private:
        string task;
        bool IsDone=0;
        public:
        ToDo(string msg, int val):task(msg), IsDone(val){}
        void show(){
            
            cout<<"task:"<<task<<"isDone:"<<IsDone<<endl;
        }
    };
    void removeTask(vector<ToDo> &v,  int id){
        v.erase(v.begin()+id-1);
    }
    void showAll(vector<ToDo> &v){
        for (auto x : v){
            x.show();
        }
    }
    void DeleteTask (vector<ToDo> &v, int id){
        if (id >= v.size() || v.empty())
        return;
        v.erase(v.begin()+ id-1);
    }
    int main (){
        vector <ToDo> v;
        int option, id;
        string message;
        while (1){
        cout<<"Enter user input"<<endl;
        cout<<"menu \n \t 1.Add task \n\t 2.Delete Task \n\t 3.ShowAll \n\t 4.Exit\n"<<endl;
        cin>>option;
        
        switch (option){
            case 1:
            cout<<"Enter your task details"<<endl;
            cin>>message;
            v.push_back(ToDo(message, 1));
            break;

            case 2:
            cout<<"Enter the task index which you want delete:";
            cin>>id;
            DeleteTask(v, id);
            break;

            case 3:
            showAll(v);
            break;
            case 4:
            exit(0);
            break;
        }
        }
    }