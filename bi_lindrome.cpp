#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=1;
    bool flag =false;
    for(int i=0;i<n;i++)
    {
         count =1;
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                count++;
                flag=true;
                break;
            }
        }
        if(flag) break;
    }
    if(count==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<n-count<<endl;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	solve();
	}
	return 0;
}
