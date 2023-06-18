#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++) cin>>a[i];
    // Greedy solution
    for(int i=0;i<(n-1);){
        if(a[i]<=a[i+1]){
          i++;
        }
        else{
        // a[i] >a[i+1];
        i+=2;
        cnt++;
        }
    }
    cout<<cnt<<endl;
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