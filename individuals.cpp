#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;  cin>>n;
    if(n==1){
        cout<<n<<endl;
        return;
    }
    if(n%2==1){
        cout<<-1<<endl;
        return;
    }

    int pref[n];
    int arr[n];
    for(int i=0;i<n;i++){
     arr[i]=(i+1);
     
    }
    pref[0]=arr[0];
    for(int i=1;i<n;i++){
        pref[i] = (pref[i-1]+arr[i]);
    }

    for(int i=1;i<n;i++){
        if(pref[i]%(i+1)==0){
            pref[i] = pref[i-1]+arr[i+1];
            swap(arr[i],arr[i+1]);
        }
    }
    swap(arr[0],arr[1]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){


int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}