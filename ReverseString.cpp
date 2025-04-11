// Online C++ compiler to run C++ program online
#include <iostream>
class mYstring{
    char *String;
    int  length;
 public:
 mYstring (char *s, int lnth){
     
    // String = new char[lnth+1];
     String=s;
     length = lnth;
 }
 
 void display (){
     std::cout<<String<<std::endl;
 }
 void ReverseString(){
     int var =0, var1=length-1;
     
     for (var =0; var<var1; var++, var1--){
         char tmp;
         if (String[var]  != String[var1]){
             tmp = String[var];
             String[var] = String[var1];
             String[var1] = tmp;
         }
     }
 }
};
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    char s[20] = "hello";
    mYstring instance(s, 5);
    instance.ReverseString();
    instance.display();
    return 0;
}