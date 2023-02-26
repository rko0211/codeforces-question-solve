#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>&v, int ele,int n)
{
    int lo=0; int hi=n-1;
    int mid;
    while(hi-lo>1)
    {
       mid = (lo+hi)/2;
       if(v[mid]<ele)
       {
        lo=mid+1;
       }
       else{
        // v[mid]>=ele
        hi=mid;
       }

    }

if(v[lo]>=ele)
{
    return lo;
}
if(v[hi]>=ele)
{
    return hi;
}
return -1;
}


int main()
{

int n ;
cin>>n;vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
int ele;
cin>>ele;
cout<<v[lower_bound(v,ele,n)]<<endl;;
    return 0;
}