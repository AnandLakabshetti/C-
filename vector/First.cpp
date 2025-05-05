#include <iostream>
#include <vector>
/* In this example trying to understand the vector allocation using pointer and object directly*/
int main (){
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);

    // 2. Vector on heap
    std::vector<int>* v1 = new std::vector<int>();
    v1->push_back(100);
    v1->push_back(200);

    // Addresses
    std::cout << "=== Vector v (on stack) ===" << std::endl;
    std::cout << "Address of vector object v: " << &v << std::endl;
    std::cout << "Address of internal array (v.data()): " << v.data() << std::endl;

    std::cout << "\n=== Vector v1 (on heap) ===" << std::endl;
    std::cout << "Address of vector pointer v1 (on stack): " << &v1 << std::endl;
    std::cout << "Address of vector object *v1 (on heap): " << v1 << std::endl;
    std::cout << "Address of internal array (v1->data()): " << v1->data() << std::endl;

    // Cleanup
    delete v1;

    return 0;
}
