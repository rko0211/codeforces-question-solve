#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    cin>>n>>m;
    int arr[n], queries[m];
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<m;i++) cin>>queries[i];
     int ans[m];
     int k =0;
     for(int i=0;i<m;i++){
         int idx = queries[i];
         int minval =INT_MAX;
         
         for(int j=0;j<=idx && idx<n;j++){
           minval = min(minval,arr[j]);
         }
         ans[k]= minval;
         k++;
     }
     for(int i=0;i<m;i++){
         cout<<ans[i]<<" ";
     }
    return 0;
}