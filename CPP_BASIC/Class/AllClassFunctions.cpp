#include<iostream>
class Rectangle{
    private:
    int breadth;
    int length;
    
    public:
Rectangle (int, int);
Rectangle (Rectangle &);
void setLength (int );
void setBreadth (int );

int getLength();
int getBreadth();

int perimeter ();
int Area();
~Rectangle();
};
int main (){

    Rectangle r1(10,20);
    std::cout<<"r1.area():"<<r1.Area()<<std::endl;

    Rectangle r2(r1);
    
    std::cout<<"r2.area():"<<r2.Area()<<std::endl;
    return 0;
}
//below function will become the function call, if write them in call them those become the inline function.
Rectangle::Rectangle(int a=1, int b=1){
        std::cout<<"Parameterized constructor"<<std::endl;
        length=a;
        breadth=b;
    }
Rectangle::Rectangle(Rectangle &obj){
        std::cout<<"copy constructor"<<std::endl;
        length=obj.length;
        breadth=obj.breadth;
    }
int Rectangle::Area(){
        return length*breadth;
};

    //set functions are called as mutator
void Rectangle::setLength (int l){
        if (l <0)
        length=1;
        else 
        length=l;
    }
void Rectangle::setBreadth (int b){
        if (b <0)
        breadth=1;
        else 
        breadth=b;
}

//get functions are called Accessor
int Rectangle::getLength(){
    return length;
}

int Rectangle::getBreadth(){
    return breadth;
}

int Rectangle::perimeter (){
        return 2*(length + breadth);
    }
Rectangle::~Rectangle(){
    std::cout<<"Destroying the object\n";
}    
