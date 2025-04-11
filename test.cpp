#include <iostream>
#include <sstream>

int main() {
    int num = 123;
    
    std::stringstream ss;
    ss << num;  // Insert the integer into the stringstream
    
    std::string str = ss.str();  // Convert the stringstream to a string
    
    std::cout << "The integer as a string: " << str << std::endl;
    std::cout <<"typeid str :"<<typeid(str).name() ;
    // Now convert the string back to an integer
    int new_num;
    std::stringstream ss2(str);
    ss2 >> new_num;
    std::cout <<"typeid:"<<typeid(num).name() ;
    std::cout << "The string converted back to an integer: " << new_num << std::endl;
    
    return 0;
}

