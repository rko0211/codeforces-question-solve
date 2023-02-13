#include<bits/stdc++.h>
using namespace std;
int main()
{

 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;int j=n-1;
    int count=0;
    while(i<j)
    {
        if((s[i]=='0'&& s[j]=='1') || (s[i]=='1' && s[j]=='0'))
        {
            count+=2;
        }
        else break;
        i++;j--;
    }
    cout<<(n-count)<<endl;
 }

    return 0;
}