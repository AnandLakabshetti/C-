#include<iostream>
using namespace std;

int main (){
int mid, high=4, low=0;
int a[5] = {1,2,3,4,5};
int key = 4;

while (high>low){
mid = (low+high)/2;
    if (a[mid] == key){
    std::cout<<"element found at :"<<mid<<std::endl;
    return 0;
    }
    else if (key >  a[mid])
        low = mid+1;
    else 
        high = mid-1; 
    }
cout<<"could not found the element"<<std::endl; 

}