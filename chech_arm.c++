#include <iostream>
#include <cmath>
using namespace std;
int arm(int n){
    int m=n;
    int t=n;
    int c=0,s=0;
    while(n){
        c++;
        n%10;
        
    }

    while(m){
        int r=m%10;
        s+=pow(r,c);
        m/=10;
    }
    if (s==t)
      return 1;
      return 0;

}
int main(){
    int a,b,x,y,i,c=0;
    a=1,b=200;
    
for( i=a;i<b; i++){
    if(arm(i)==1){
        c++;
       cout<<i<<" ";
    }
    cout<<c;
}
return 0;
}
