#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll a,b,c; cin>>a>>b>>c;
  
    if(c%2==1){
        if(a>=b){
            cout<<"First\n";
        }
        else{
            cout<<"Second\n";
        }
    }
    else{
        if(a<=b){
            cout<<"Second\n";
        }
        else{
            cout<<"First\n";
        }
    }
}
int main(){

int t; cin>>t;
while(t--)
{
    solve();
}
    return 0;
}