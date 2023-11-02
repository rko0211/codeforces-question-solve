#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    // unordered_map<char,int>um;
    vector<int>freq(26,0);
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    int i;
    for(i=0;i<s.size();i++){
        if(freq[s[i]-'a']>=2){
            freq[s[i]-'a']--;
        }
        else{
            break;
        }
    }
 string ans ="";
 while(i<s.size()){
    ans+=s[i];
    i++;
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