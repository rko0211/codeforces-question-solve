#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    unordered_set<char>st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    if(st.size()==1){
        cout<<-1<<endl;
        return;
    }
    cout<<(s.size()-1)<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}
    return 0;
}