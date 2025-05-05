#include<iostream>

/*By default this pointer is passed as an implicit parameter of the function 
  when we call the function using an object.*/
class Rectangle{
    public:
    int breadth;
    int length;

Rectangle (int breadth, int length){
    /* This can be used to remove the ambiguity between data members of class  
       and parameters of the function if they have the same name.*/
this->breadth = breadth;
this->length = length;
}
void display (){
    std::cout<<length<<breadth<<std::endl;
}
};
int main (){

    Rectangle r1(11,22);
    r1.display();
}
