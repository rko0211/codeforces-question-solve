#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ;  cin>>n;
    string s ;  cin>>s;
    vector<int>v(26,0);
    for(int i=0;i<s.size();i++){
      v[s[i]-'A']++;
    }
    int ballon=0;
    for(int i=0;i<s.size();i++){
        if(v[s[i]-'A']!=0)
      ballon+= (2+(v[s[i]-'A']-1));
      v[s[i]-'A']=0;
    }
    cout<<ballon<<endl;
}
int main(){

int t; cin>>t;
while (t--)
{
    solve();
    /* code */
}


    return 0;
}