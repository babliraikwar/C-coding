#include <iostream>
using namespace std;
#include <vector>
#include <map>

int main(){

string s,p=" ";
getline (cin,s);
map<char,int>f;
for(auto k:s)
f[k]++;
for(auto k:f)
if(k.second==1)
  p+=k.first;

cout<<p;
}