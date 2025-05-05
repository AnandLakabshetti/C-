#include<iostream>
using namespace std;
/*Here after swap also the x and y values will be changed  because we are using reference, changes will affect in main.*/
void Swap (int &a, int &b){
    int tmp;
    tmp= a;
    a=b;
    b=tmp;
    cout<<"after swap: in function"<<"a:"<<a<<"b:"<<b<<endl;
}
    int main()
    {
        int x=10, y=20;
        Swap (x,y);
        cout<<"after swap:"<<"x:"<<x<<"y:"<<y<<endl;
        return 0;
    }
    