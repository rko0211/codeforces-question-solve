#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    for(int i=1;i<=8;i++){
        if(i!=(s[1]-'0'))
        cout<<s[0]<<i<<endl;
    }
    for(int i=0;i<8;i++){
        if((('a'+i)!=s[0])){
            cout<<char('a'+i)<<s[1]<<endl;
        }
    }
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}