#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n ;  cin>>n; 
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
       ll max1 = INT_MIN, max2 = INT_MIN;
        ll min1 = INT_MAX, min2 = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (a[i] >= max1) {
                max2 = max1;
                max1 = a[i];
            } else if (a[i] > max2) {
                max2 = a[i];
            }

            if (a[i] <= min1) {
                min2 = min1;
                min1 = a[i];
            } else if (a[i] < min2) {
                min2 = a[i];
            }
        }

        cout << max(max1*max2, min1*min2) << endl;


}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}
    return 0;
}