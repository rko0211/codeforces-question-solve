#include<bits/stdc++.h>
using namespace std;
void frequencycount(int n, vector<int>&arr, int p){
    vector<int>freq(n+1,0);
    for(int i=0;i<arr.size();i++){
   freq[arr[i]]++;
    }


    for(int i=1;i<(n+1);i++){
        arr[i]=freq[i];
    }

        for(int i=1;i<(n+1);i++){
        arr[i-1]=freq[i];
    } 

}

int main(){

int n;  cin>>n;
vector<int>a(n);  for(int i=0;i<n;i++) cin>>a[i];
int p;  cin>>p;
frequencycount(n,a,p);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;


    return 0;
}