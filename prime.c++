#include <iostream>
using namespace std;
int prime(int n){
    int i,f=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0)
        return 0;
        return 1;
        
    }

}
int main(){
    int n;
    cin>>n;
  if( prime(n)==1){
    cout<<n<<"prime";
  }
  else{
    cout<<"not prime";
  }
  return 0;
}