#include<iostream>
class complex {
public:
int real;
int imag;

complex operator+(complex x){
    complex tmp;
    tmp.real=real+x.real;
    tmp.imag=imag+x.imag;
/*above line can be written as below as well.
    tmp.real=this->real+x.real;
    tmp.imag=this->imag+x.imag;*/

    return tmp;
}

};
int main (){
complex c1, c2, c3;
c1.real=10, c1.imag=20;
c2.real=11, c2.imag=22;

c3=c1+c2;
std::cout<<"complex addition:"<<c3.real<<"+i"<<c3.imag<<std::endl;
  return 0;  
}
