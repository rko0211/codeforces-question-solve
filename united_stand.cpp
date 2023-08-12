#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
  vector<int>b,c;
  int i=0;
  for( i=0;i<n-1;i++){
    b.push_back(a[i]);
    if(a[i]!=a[i+1]){
        break;
    }
  }
  if(a[i]==a[i+1] && (i+1)<n){
    b.push_back(a[i+1]);
  }
  if(b.size()==n) {cout<<"-1\n"; return;}

  for(int j=i+1;j<n;j++){
    c.push_back(a[j]);
  }
  cout<<b.size()<<" "<<c.size()<<endl;
  for(int k=0;k<b.size();k++){
    cout<<b[k]<<" ";
  }
  cout<<endl;
  for(int k=0;k<c.size();k++){
    cout<<c[k]<<" ";
  }
//   cout<<endl;

}
int main(){


int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}