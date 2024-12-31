#include <iostream>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;
    return n*fact(n-1);
}
/*
while(n){
p*=n--;
}
*/ 
int main(){
    int n;
    cin>>n;
 cout<<fact(n);
}