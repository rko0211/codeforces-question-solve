#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    unordered_map<int,bool>m;
    for(int i=0;i<n;i++){
        m[a[i]] = false;
    }
    int ans = INT_MIN;
    int count =0;
    for(int i=0;i<n;i++){
        if(m[a[i]]==false){
            m[a[i]] = true;
            count++;
        }
        else{
            m[a[i]] = false;
            ans = max(ans,count);
            count --;
        }
    }
    ans = max(ans,count);
    cout<<ans<<endl;
}
int main(){


int t; cin>>t;
while (t--)
{
    /* code */
    solve();
}


    return 0;
}