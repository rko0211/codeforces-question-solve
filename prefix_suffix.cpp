#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ;  cin>>n;
    vector<string>vs;
    int x = 2*n-2;
    while(x--){
        string s; cin>>s;
     if(s.size()==n-1){
        vs.push_back(s);
     }
    }
    reverse(vs[0].begin(),vs[0].end());
    if(vs[0]==vs[1]){
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}