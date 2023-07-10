#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int n;
    cin >> n;
    ll x;
    cin >> x;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
 int l = 0,r=n-1;
 int cnt=0;
 while(l<=r){
    if(a[l]+a[r]<=x){
        l++;r--;
    }
    else{
        r--;
    }
    cnt++;
 }
 cout<<cnt<<endl;

    return 0;
}