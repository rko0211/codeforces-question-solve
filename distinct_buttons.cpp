#include<bits/stdc++.h>
using namespace std ;
void solve(){
    int n; cin>>n;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        vp.push_back({x,y});
    }
    sort(vp.begin(),vp.end());
    bool d1=false,d2=false,d3=false,d4=false;
    if(vp[0].first * vp[n-1].first<0){
        d1 = true;
        
            d2 = true;
        
    }
    int maxi =INT_MIN;
    int mini = INT_MAX;
    for(auto &it:vp){
        maxi = max(maxi,it.second);
        mini = min(mini,it.second);
    }
    if(mini*maxi<0){
        d3=true;
        d4 = true;
    }
    if(d1&&d2&&d3&&d4){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }

  
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}