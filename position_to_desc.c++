#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
vector<int> sorted(vector<int>p,int n,int x,int y){
    sort(p.begin()+x-1,p.begin()+y-1,greater<int>());
    return p;
}
int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int x,y;
    cin>>x>>y;
    vector<int>Q=sorted(p,n,x,y);
    for(auto k:Q)
    cout<<k;

}
