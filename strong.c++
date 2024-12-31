#include <iostream>
using namespace std;
int fact(int n){
    int f=1;
    while(n){
        f*=n--;
    }
    return f;
}
int strong(int n){
    int m=n;
    int s=0;
    while(n){
        int r=n%10;
        s+=fact(r);
        n/=10;
    }
    if(s==m)
    return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    if(strong(n)==1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}