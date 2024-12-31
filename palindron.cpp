#include <iostream>
using namespace std;
int main(){
    int n,p;
    cin>>n; 
    n=p;
    int s=0;
    while(n){
        s=s*10+n%10;
        n/=10;
    }
    if(s==p)
    {
        cout<<" it's number is palindron";
    }
    else
    {
        cout<<" it is not palindron";
    }
    return 0;
}
