#include<iostream>
using namespace std;

int* AllocateArray (int size){
    int i=0;
    int *q =  new int [size];
    for (i=0;i<size;i++)
        q[i] = i*2;
    
    cout<<"q:"<<q<<endl;
    return q;
}

int main()
{
    int *p = AllocateArray(5);
    int i;
    cout<<"p:"<<p<<endl;
    for (i=0;i<5;i++)
    cout<<p[i]<<endl;
}
