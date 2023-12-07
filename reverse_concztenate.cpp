#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]){
            return false;
        }
    }
    return true;
}
void solve(){

int n,k; cin>>n>>k;
string s; cin>>s;
if(k==0){
    cout<<1<<endl;
    return;
}
if(ispalindrome(s)){
    cout<<1<<endl;
    return ;
}
cout<<2<<endl;

}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}