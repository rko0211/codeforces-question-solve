#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k ; cin>>n>>k;
    int a[n];  for(int i=0;i<n;i++) cin>>a[i];

   unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        if(a[i]==(i+1)){
            m[a[i]]=-1;
        }
        if(m[a[i]]!=-1)
        m[a[i]]++;
    }
int count=0;
for(auto &it:m){
    if(it.second>=k){
        count++;
    }
}
cout<<count<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}


    return 0;
}