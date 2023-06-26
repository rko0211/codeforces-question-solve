#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    if (n == 1)
    {
        if (a[0] == b[0])
        {
            cout << 2 << endl;
            return;
        }
        else
        {
            cout << 1 << endl;
            return;
        }
    }
    map<int, int> m1;
    int maxcnt1 = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            maxcnt1++;
        }
        else
        {
            if (m1[a[i]] <= maxcnt1)
            {
                m1[a[i]] = maxcnt1;
            }
            maxcnt1 = 1;
        }
    }
    if (m1[a[n - 1]] <= maxcnt1)
    {
        m1[a[n - 1]] = maxcnt1;
    }


    map<int, int> m2;
    int maxcnt2 = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] == b[i + 1])
        {
            maxcnt2++;
        }
        else
        {
            if (m2[b[i]] <= maxcnt2)
            {
                m2[b[i]] = maxcnt2;
            }
            maxcnt2 = 1;
        }
    }
    if (m2[b[n - 1]] <= maxcnt2)
    {
        m2[b[n - 1]] = maxcnt2;
    }


int maxval1 = INT_MIN;
vector<int>temp1;
for(auto &it:m1){
    if(it.second>=maxval1){
        temp1.push_back(it.first);
        maxval1=it.second;
    }
}
int maxval2 = INT_MIN;
vector<int>temp2;
for(auto &it:m2){
    if(it.second>=maxval2){
        temp2.push_back(it.first);
        maxval2=it.second;
    }
}

int ans =INT_MIN;
for(auto &it:temp1){
    ans = max(ans,m1[it]+m2[it]);
}
for(auto &it:temp2){
    ans = max(ans,m1[it]+m2[it]);
}

cout<<ans<<endl;


}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}