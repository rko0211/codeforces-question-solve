#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m; cin>>n>>m;
    string s,t; cin>>s>>t;
    bool isgood = true;
    for(int i=0;i<t.size()-1;i++){
        if(t[i]==t[i+1]){
            isgood = false;
            break;
        }
    }
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            if(s[i]==t[0] || s[i+1]==t[m-1] || isgood == false){
                cout<<"No\n";
                return;
            }
        }
    }
    cout<<"Yes\n";
}
int main(){


int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}