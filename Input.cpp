#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main (){    
string i;
string s;

getline (cin, s);
cout<<s<<endl;

stringstream ss (s);
vector <int>v;
while (ss >> i) {
v.push_back(stoi(i));
}

for(const auto j:v)
cout<<j<<" ";
}