// Online C++ compiler to run C++ program online
#include <iostream>
class string{
    char *String;
    int  length;
 public:
 string (char *s, int lnth){
     String = s;
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
             String[var1] = String[var1];
             String[var1] = tmp;
         }
     }
 }
};
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    
    string instance((char* )"Hello", 5);
    instance.ReverseString();
    instance.display();
    return 0;
}