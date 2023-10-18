#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k; cin>>n>>k;
    int sum = 0;
    int a[n]; for(int i=0;i<n;i++){ cin>>a[i];
        
        sum+=a[i];
    }
    
    int avg = sum/n;
    int rem = sum%n;
    //   sort(a,a+n);
    for(int i=0;i<n;i++){
        a[i] = ((avg));
        if(rem>0){
            a[i]++;
            rem--;
        }
    }
    
    
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
 
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cout<<"NO\n";
            return;
        }
        
    }
    if(abs(a[n-1]-a[0])>k){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
    
    
}
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
