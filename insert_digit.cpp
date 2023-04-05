#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,d; cin>>n>>d;
    string s; cin>>s;
    int ind=-1;
    string ans="";
    for(int i=0;i<n;i++){
        if(d>(s[i]-'0')){
            char c= d+'0';
            ans+=c;
            ind =i;
            break;
        }
        else{
            ans+=s[i];
        }
       
    }
    if(ind!=-1)
    for(int i=ind;i<n;i++){
        ans+=s[i];
    }
    if(ind==-1){
        ans+=(d+'0');
    }
    cout<<ans<<endl;
}
int main()
{
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}