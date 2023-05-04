#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;  cin>>n;
    int a[n];  for(int i=0;i<n;i++) cin>>a[i];

    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        if(a[i]==1 || a[i]==2|| a[i]==3||a[i]==4|| a[i]==5||a[i]==6||a[i]==7){
            m[a[i]]=i;
        }
    }
    int maxindex =INT_MIN;

    for(auto &it:m){
        maxindex = max(maxindex,it.second);
    }
    cout<<(maxindex+1)<<endl;
}
int main(){


int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}