#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
   if(s[0]>s[1])
    cout<<(25*(s[0]-'a')+(s[1]-'a')+1)<<endl;
    else
    cout<<(25*(s[0]-'a')+(s[1]-'a'))<<endl;
}
int main(){


int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}