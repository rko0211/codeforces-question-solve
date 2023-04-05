#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;  cin>>n>>k;
    string s;cin>>s;
    if(s[0]=='0'){
        s[0]='1';
        k--;
    }
    while(k--){
        s+='0';
    }
    cout<<s<<endl;

}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}