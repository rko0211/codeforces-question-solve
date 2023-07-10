#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    ll f = pow(10,a-1);
    ll fmax = pow(10,a)-1;
    ll s = pow(10,b-1);
    ll smax = pow(10,b)-1;
    ll t = pow(10,c-1);
    ll tmax = pow(10,c)-1;
    if(c==a && c==b){
        cout<<f<<" "<<s<<endl;
        return;
    }
    ll ans1,ans2;
    bool flag =false;
    for(int i= f;i<=fmax;i++){
        for(int j=s;j<=smax;j++){
            if( __gcd(i,j)>=t &&__gcd(i,j)<=tmax){
                flag = true;
                ans1 = i;
                ans2 = j;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;

    
}
int main(){

int t; cin>>t;
while(t--)
{
    solve();
}
    return 0;
}