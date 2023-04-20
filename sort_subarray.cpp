#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), arr(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int st=0,end=0;
        for(int i=0;i<n;i++){
            if(a[i]!=arr[i]){
                st=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]!=arr[i]){
                end=i;
                break;
            }
        }
        for(int i=st;i>0;i--){
            if(arr[i-1]<=arr[i]){
                st--;
            }
            else break;
        }
        for(int i=end;i<n-1;i++){
            if(arr[i+1]>=arr[i]){
                end++;
            }
            else break;
        }
        cout<<st+1<<" "<<end+1<<endl;
        
    }

    return 0;
}