#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n,k;cin>>n>>k;
    if(k%4==0){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    vector<pair<int,int>>vp;
int i=1;
if(k%2==0 && k%4!=0){
    bool flag =true;
    while(i<=n){
        if(flag){
            vp.push_back({(i+1),i});
            i+=2;
            flag=false;
        }
        else{
            vp.push_back({i,(i+1)});
            i+=2;
            flag =true;
        }
    }
}
else{
    while(i<=n){
        vp.push_back({i,(i+1)});
        i+=2;
    }
}
for(auto &it:vp){
cout<<it.first<<" "<<it.second<<endl;
}

}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}