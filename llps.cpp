#include<bits/stdc++.h>
using namespace std;
void f(int ind,string s, string str, vector<string>&vs){
if(ind>=s.size()){
    vs.push_back(str);
    return;
}
// Pick case
str+=s[ind];
f(ind+1,s,str,vs);
// Backtrack
str.pop_back();
// Notpick
f(ind+1,s,str,vs);
// 
}
bool isPalindrome(string s){
    int n = s.size();
for(int i=0;i<s.size()/2;i++){
    if(s[i]!=s[n-i-1]) return false;
}
return true;
}
int main(){
string s; cin>>s;

vector<string>vs;

// Generate all possible subsequence
string str ="";
f(0,s,str,vs);

sort(vs.begin(),vs.end(),greater<string>());
// for(auto it:vs){
//     cout<<it<<" ";
// }
// cout<<endl;
string ans ="";
for(int i=0;i<vs.size();i++){
if(isPalindrome(vs[i])){
    ans = vs[i];
    break;
}
}
cout<<ans<<endl;

    return 0;
}