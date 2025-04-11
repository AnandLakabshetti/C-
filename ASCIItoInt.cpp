#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s;
    getline(cin, s);  // Read a line of input
    cout << s << endl;

    vector<int> v;
    int num = 0;  // To hold the current number being formed

    for (char c : s) {
        cout<<c<<endl;
        if (c >= '0' && c <= '9') {  // If the character is a digit
            num = num * 10 + (c - '0');  // Build the number
        } else if (num > 0) {  // When a non-digit is encountered and num is non-zero
            v.push_back(num);  // Push the formed number into the vector
            num = 0;  // Reset num for the next number
        }
    }

    // If there's a number left at the end of the string
    if (num > 0) {
        v.push_back(num);
    }

    // Output the vector of integers
    for (const auto &j : v) {
        cout << j << " ";
    }
}
