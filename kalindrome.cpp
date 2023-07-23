#include<bits/stdc++.h>
using namespace std;
const int xn = 2e5+10;

void solve(){
    int n ; cin>>n;
    int a[n+1]; for(int i=0;i<n;i++) cin>>a[i];
    int val1,val2;
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
      val1 = a[i];
      val2 = a[n-i-1];
      break;
        }
    }
bool ans =false;
vector<int>v1,v2;
int m=0;
for(int i=0;i<n;i++){
    if(a[i]!=val1){
        v1[m++] = a[i];
    }
}
m =0;
for(int i=0;i<n;i++){
    if(a[i]!=val2){
        v2[m++] = a[i];
    }
}
int s = v1.size();
for(int i=0;i<s/2;i++){
    if(v1[i]!=v1[n-i-1]){
        ans = false;
        break;
    }
    else{
        ans = true;
    }
}
if(!ans){
    int s = v2.size();
for(int i=0;i<s/2;i++){
    if(v2[i]!=v2[n-i-1]){
        ans = false;
        break;
    }
    else{
        ans = true;
    }
}
}
if(ans){
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}