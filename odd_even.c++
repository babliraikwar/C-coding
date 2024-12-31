#include <iostream>
using namespace std;
#include <cmath>
#include <string>
int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    string odd,even;
    for(auto k:s)
    {
        if(((int)k-'0')%2==0)
        even+=k;
        else
        odd+=k;
    }
    int x=stoi(odd);
    int y=stoi(even);
    cout<<abs(x-y);
}
