#include<bits/stdc++.h>
using namespace std;

int main(){

int n; cin>>n; string s; int p;
map<string,int>m;
vector<pair<string,int>>vp;
while(n>0){
   
    cin>>s>>p;
    vp.push_back({s,p});
    m[s] +=p;
    n--;
}

int maxval = INT_MIN;
string ans ;
for(auto &it:m){
    if(it.second>maxval){
        maxval = it.second;
        ans = it.first;
    }
}

int count =0;
for(auto &it:m){
    if(it.second==maxval) count++;
}
if(count==1){
    cout<<ans<<endl;
    return 0;
}

unordered_map<string,int>um;
for(int i=0;i<vp.size();i++){
    if(m[vp[i].first] == maxval){
        um[vp[i].first]+=vp[i].second;
    }
    if(um[vp[i].first]>=maxval){
        ans = vp[i].first;
        break;
    }
}
cout<<ans<<endl;


    return 0;
}