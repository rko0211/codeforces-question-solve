#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int b;
    string s;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b >> s;
        int ucount = 0, dcount = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'U')
            {
                ucount++;
            }
            else
            {
                dcount++;
            }
        }

        int dif = abs(dcount-ucount);
        if(ucount>dcount){
            a[i]-=dif;
        }
        else if(dcount>ucount){
            a[i]+=dif;
        }
        
        if(abs(a[i])>=10){
            a[i]%=10;
        }
        if(a[i]<0){
            a[i]=-a[i];
            a[i] = (10-a[i]);
            a[i]%=10;
        }


    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
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