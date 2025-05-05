#include<iostream>
using namespace std;

class Test{
    public:
    int a;
    static int count;
    Test(){
        a=10;
        count++;
    }
    static int  GetCount (){
        return count;
    }
};
int Test::count =0;
int main (){
Test t1, t2;

/* static member functions can be called on objects as well as on class.*/
cout<<Test::GetCount()<<endl;
cout <<t1.GetCount()<<endl;;
}
