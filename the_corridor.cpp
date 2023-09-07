#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        int d,s; cin>>d>>s;
        vp.push_back({d,s});
    }
    sort(vp.begin(),vp.end());
    vector<int>ans;
    for(auto it:vp){
        int a = it.second;
       int val = a/2;
       if(a%2!=0){
        val++;
       }

       int reduce = val-1;

       ans.push_back((it.first+reduce));

    }
    sort(ans.begin(),ans.end());
    cout<<ans[0]<<endl;
}
int main(){


int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}