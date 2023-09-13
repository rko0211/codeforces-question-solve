#include<bits/stdc++.h>
using namespace std;
void solve(){
string s; cin>>s;
bool onea = false;
bool oneb = false;
int i =0;
int j = 0;
int cnt =1;
for(int i=1;i<s.size();i++){
if(s[i]==s[i-1]){
    cnt++;
}
else{
    if(cnt==1){
        onea = true;
        break;
    }
    cnt =1;
}
}
if(cnt ==1) onea = true;
    if(onea){
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