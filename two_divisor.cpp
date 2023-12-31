    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int 
    void solve(){
    ll a,b; cin>>a>>b;
   if(b%a==0){
    cout<<(b* b/a)<<endl;

   }
   else{
    cout<<(a*b)/__gcd(a,b)<<endl;
   }
    }
    int main(){
     
    int t; cin>>t;
    while(t--){
        solve();
    }
     
        return 0;
    }