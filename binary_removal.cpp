#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    int ind = s.size()-1;
 for(int i=0;i<s.size()-1;i++){
    if(s[i]=='1' && s[i+1]=='1'){
        ind = i;
        break;
    }
 }
 int ind2 = -1;
 for(int j=0;j<s.size()-1;j++){
    if(s[j]=='0' && s[j+1]=='0'){
        ind2 = j;
    }
 }
 if(ind<ind2){
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