#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n ; cin>>n;
    int len =0;

    int minval =INT_MAX;
    int rem1 = n%10;
    while(n>0){
        int rem = n%10;
        minval = min(minval,rem);

        len++;
        n/=10;
    }
    if(len >2){
        cout<<minval<<endl;
        return;
    }
    if(len==2){
        cout<<rem1<<endl;
        return;
    }


}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}