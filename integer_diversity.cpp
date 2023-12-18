#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    int ans =0;
     for(auto &it:m){
        if(it.first==0){
            ans++;
        }
        else if(it.second==1){
            ans++;
        }
       else if(it.first!=0 && it.second>=2){
            ans+=2;
        }
     }
     cout<<ans<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}