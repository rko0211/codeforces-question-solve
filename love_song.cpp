#include<bits/stdc++.h>
using namespace std;
int main(){


int n,q; cin>>n>>q;
string s;cin>>s;
int dp[n+1] ={0};
dp[0] = 0;
// dp[i] represent length of the substring when charecter number is i
for(int i=0;i<n;i++){
    dp[i+1] = (dp[i] + (s[i]-'a'+1));
}
while(q--){
    int a,b; cin>>a>>b;
    cout<<(dp[b]-dp[a-1])<<endl;
}

    return 0;
}