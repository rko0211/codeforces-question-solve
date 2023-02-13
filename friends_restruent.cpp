#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;

ll x[n]; ll y[n];
for(int i=0;i<n;i++)
cin>>x[i];

for(int i=0;i<n;i++)
cin>>y[i];
int day =0;
int v[n];

for(int i=0;i<n;i++)
{
    ll p =(y[i]-x[i]);
    v[i]=(p);
}

sort(v,v+n,greater<int>());
int l=0;int r=n-1;
while(l<r)
{
    if(v[l]>-1 && v[r]>-1)
    {
        day++;
        l++;
        r--;
    }
    else if(v[l]<=-1 && v[r]<=-1)
    {
        break;
    }
    else if(v[l]>-1)
    {
        if(v[l]>=abs(v[r]))
        {
            day++;
            l++;
            r--;
        }
        else
        {
            r--;
        }
    }
}
cout<<day<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
};