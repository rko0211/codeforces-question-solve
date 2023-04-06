#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;  cin>>n;
    vector<string>vs;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        vs.push_back(s);
    }
    string ans ="0000000000";
    for(auto it:vs){
     for(int j=0;j<it.size();j++){
        ans[j] = ((ans[j]-'0')^(it[j]-'0'))+'0';
     }
    }
    int res = count(ans.begin(),ans.end(),'1');
    cout<<res<<endl;

}
int main(){


int t;  cin>>t;
while(t--){
    solve();
}
    return 0;
}