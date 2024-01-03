#include<bits/stdc++.h>
using namespace std ;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    string ans ="";
    // CV  CVC
    for(int i=0;i<n-1;)
    {
        if(s[i]!='a' && s[i]!='e'){
            if(s[i+1]=='a' || s[i+1]=='e'){
                ans+=s[i];
                ans+=s[i+1];
            }
            i+=2;
            if(i<n && s[i]!='a' && s[i]!='e' && s[i+1]!='a' && s[i+1]!='e'){
                ans+=s[i]; 
                i++;
            }
            ans+='.';
        }

    }
    if(ans.back()=='.')
    ans.pop_back();
    cout<<ans<<endl;
}
int main(){
int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}