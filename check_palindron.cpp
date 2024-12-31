#include <iostream>
using namespace std;
int palin(int);
int main(){
    int x,y;
    cin>>x>>y;
   
    for(int i=y; i<=x;i++){
        if(palin(i))
        cout<<i<<" ";

    }
 

}
int palin(int n){
    int p=n;
    int s=0;
    while(n!=0){
        s=s*10+n%10;
        n/=10;
    }
    if(s==p)
    return 1;
    return 0;
}
