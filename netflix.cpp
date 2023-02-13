#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a[3];
	    for(int i=0;i<3;i++)
	    cin>>a[i];
	    int x;
	    cin>>x;
	    sort(a,a+3);
	    if((a[2]+a[1])>=x)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
