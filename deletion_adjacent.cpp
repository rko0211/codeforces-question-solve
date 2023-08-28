#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    char ch ; cin>>ch;
    for(int i=0;i<s.size();i++){
        if(i%2==0 && ch==s[i])
        {
            cout<<"YES\n";
            return ;
        }
    }
    cout<<"NO\n";
}
int main(){


int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}