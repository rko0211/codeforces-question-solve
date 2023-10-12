#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m; cin>>n>>m;
    string x,s; cin>>x>>s;
    int size = n;
    int cnt =0;
    while(size<m){
        x+=x;
        size*=2;
        cnt++;
    }
    if(x.find(s)!=string::npos){
cout<<cnt<<endl;
return;
    }
   x+=x;
   cnt++;
   if(x.find(s)!=string::npos)
   {
    cout<<cnt<<endl;
   }
   else{
    cout<<-1<<endl;
   }
}
int main(){


int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}