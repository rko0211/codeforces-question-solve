#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<string>vs(n);
    for(int i=0;i<n;i++){
        cin>>vs[i];
    }
    unordered_map<string,int>m;
    for(int i=0;i<n;i++){
        m[vs[i]]++;
    }
    string ans="";
    for(int i=0;i<n;i++){
        string s = vs[i];
        int sz = s.size();
        bool flag = false;
        for(int j=0;j<sz;j++){
            string s1 = s.substr(0,j+1);
            string s2 = s.substr(j+1);

            if(m[s1]>0 && m[s2]>0){
                ans+='1';
                flag = true;
                break;
            }
        }
        if(!flag){
            ans+='0';
        }
    }
    cout<<ans<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}