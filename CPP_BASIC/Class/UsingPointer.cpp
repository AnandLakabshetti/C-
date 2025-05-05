#include<iostream>
using namespace std;
class Rectangle{
    public:
    int breadth;
    int length;

    int Area(){
        return length*breadth;
    };
    int perimeter (){
        return 2*(length + breadth);
    }
};
int main (){

    Rectangle r1;
    r1.breadth=10, r1.length=5;
    std::cout<<"r1.area():"<<r1.Area()<<std::endl;
    Rectangle *r2;
    r2 = new Rectangle;// declaring the object in  heap;
    r2->length =10;
    r2->breadth =20; 
    std::cout<<"r2.area():"<<r2->Area()<<std::endl;
    return 0;
}
