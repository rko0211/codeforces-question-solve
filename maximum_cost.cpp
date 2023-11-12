#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,b; cin>>n>>a>>b;
    string s; cin>>s;
    if( b>=0){
        
       cout<<n*(a+b)<<endl;
       return;
    }
   else{
   int m = unique(s.begin(), s.end()) - s.begin();
    cout << n * a + max(n * b, (m / 2 + 1) * b) << '\n'; 
   }
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}