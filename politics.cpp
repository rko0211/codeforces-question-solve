#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;  cin>>n>>k;
    
  int x=n; string s; cin>>s; 
  string st=s;
  int count1=1;
  x--;
    while(x--){
       cin>>s;
    if(s==st){
        count1++;
    }
 
    }
      if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<<(count1)<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}