#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    int n; cin>>n;

  ll a1 = 2;
  ll a2 = 3;
//   cout<<a1<<" "<<a2<<" ";
ll pref[n];
pref[0] = 1;

  for(int i=1;i<n;i++){
pref[i] = (pref[i-1]+2);
  }

  for(int i=0;i<n;i++){
    cout<<pref[i]<<" ";
  }
  cout<<endl;

}
int main(){


int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}