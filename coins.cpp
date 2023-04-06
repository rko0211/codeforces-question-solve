#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n; ll k;
    cin>>n>>k;
  ll val = (n-k);  // Substract Odd value 
  ll val2 = (n-2*k);// Subtract even value
  if(val<0){
    cout<<"NO\n";
    return;
  }
  if(val%2==0 || val2%2==0){
 cout<<"YES\n";
 return;
  }
else{
   cout<<"NO\n";
}
}
int main()
{

int t;  cin>>t;
while(t--){
    solve();
}
    return 0;
}