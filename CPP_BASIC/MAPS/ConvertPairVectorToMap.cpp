// C++ Program to illustrate how to Create a Map of Vectors
// Using Vector
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    // Creating a vector of pairs
    vector<pair<int, string> > vec
        = { { 1, "one" }, { 2, "two" }, { 3, "three" } };

    // Converting the vector of pairs to a map
    map<int, string> myMap(vec.begin(), vec.end());

    // Printing the map
    for (auto& pair : myMap) {
        cout << pair.first << " => " << pair.second << endl;
    }

    return 0;
}