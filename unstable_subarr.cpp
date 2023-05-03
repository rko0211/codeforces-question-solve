#include <iostream>
#include<bits/stdc++.h>

using namespace std;
#define ll long long int
void solve() {
         int n;
        cin >> n;
        ll ans=0;
  ll dif; ll sum =0;
        ll count=0;
        ll a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
  map<int,int>m;
  for(int i=0;i<n;i++){
    m[a[i]]++;
  }
  if(m.size()==n){
    cout<<((n*(n-1)/2))<<endl;
    return;
  }

  for(int i=0;i<n;i++)
  {
  dif = n - m[a[i]];
  dif-=sum;
  ans+=dif;
  m[a[i]]--;
  sum++;
  }
  cout<<ans<<endl;

}


int main() {
    int t;
    cin >> t;
    while (t--)
     {
   solve();
        }
  
  
    return 0;
}