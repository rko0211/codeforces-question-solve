#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    vector<pair<int,int>>v;
     int x = n/2;
  
       
        int i=1;
        while(x--){
        v.push_back({a[i],a[0]});
        i++;
        }
        for(auto &it:v){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
int main(){

int t;  cin>>t;
while(t--){
    solve();
}
    return 0;
}