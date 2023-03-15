#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;  cin>>n;
    int x = 2*n;
    int a[x];
    for(int i=0;i<x;i++)
    cin>>a[i];
    sort(a,a+x);
    unordered_set<int>s;
    for(int i=0;i<=x/2;i++)
    {
        int p1 = a[i];
        int p2 = a[x-i-1];
        int ans = (p1+p2);
        s.insert(ans);
        
    }
    if(s.size()>1)
        {
            cout<<"IMBALANCED"<<endl;
            return;

        }
    cout<<"PERFECT\n";
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
}