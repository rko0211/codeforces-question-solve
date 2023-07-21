#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int a,b;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
    cin>>a>>b;
    v.push_back({a,b});
    }
    int ans ;
    int val =INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i].first<=10){
            if(val<v[i].second){
                val = v[i].second;
                ans = i+1;
            }
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