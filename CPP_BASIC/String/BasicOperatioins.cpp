#include<iostream>
using namespace std;
int main ()
{
    string str = "hello ";

    cout<<"str.length:"<<str.length()<<endl;
    cout<<"str.size:"<<str.size()<<endl;
    cout<<"str.capacity:"<<str.capacity()<<endl;
    str.resize(50);//capacity can be 50 or more.
    cout<<"str.capacity:"<<str.capacity()<<endl;
    cout<<"str.max_size:"<<str.max_size()<<endl;
    str.clear();
    cout<<"str.length:"<<str.length()<<endl;
    
    if (str.empty())
    cout<<"string is empty\n";
    else 
    cout<<"string is not empty\n";
    return 0;
    /*The capacity may be greater than or equal to the size of the string. 
    When you append more characters than the current capacity,
     the string may reallocate to increase its capacity.*/

}