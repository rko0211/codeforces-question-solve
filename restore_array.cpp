#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;  cin>>n;
int x=n-1;  int a[x];
for(int i=0;i<x;i++)cin>>a[i];
int prev=0;
cout<<a[0]<<" ";
for(int i=1;i<x;i++){
  cout<<min(a[i-1],a[i])<<" ";
}
cout<<a[x-1]<<endl;
 
    

}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}