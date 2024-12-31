#include <iostream>
using namespace std;
#include <cmath>
int arm(int n){
    int m=n,c=0,s=0;
    while(n){
        c++;
        n/=10;
    }
    while(m){
        int r=m%10;
        s+= pow(r,c);
        m/=10;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    cout<<arm(n);
    return 0;
}