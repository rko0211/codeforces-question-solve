#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    vector<int>c[26];
    for(int i=0;i<s.size();i++){
        c[s[i]-'a'].push_back(i);
    }
    unordered_set<char>st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    int req = st.size();
    if(st.size()==s.size()){
        cout<<"YES\n";
        return;
    }
    int miniIndex_diff=INT_MAX;
    for(auto &it:st){
       for(int i=0;i<c[it-'a'].size()-1;i++){
          miniIndex_diff = min(miniIndex_diff,(c[it-'a'][i+1]-c[it-'a'][i]));
       }
    }
    if(miniIndex_diff==req){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
int main(){


int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}