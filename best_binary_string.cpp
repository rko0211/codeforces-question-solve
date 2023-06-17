#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    if(s[0]=='?'){
        s[0]='0';
    }
    for(int i=1;i<s.size();i++){
        if(s[i]=='?'){
            s[i]=s[i-1];
        }
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