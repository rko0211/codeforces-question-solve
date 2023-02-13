#include<bits/stdc++.h>
using namespace std;
bool is_primes[1001];
int main()
{
int n,k;
cin>>n>>k;
for(int i=2;i<1001;i++)
{
    // Initially all are primes
    is_primes[i]=true;
}
// Sieve of eratosthenesis

for(int i=2;i*i<=n;i++)
{
    if(is_primes[i]==true)
    {
        for(int j =i*i;j<=n;j+=i)
        {
            is_primes[j]=false;
        }
    }
}

vector<int>primes;

for(int i=2;i<=n;i++)
{
    if(is_primes[i]==true)
    {
        primes.push_back(i);
    }
}
int count=0;
for(int i=0;i<primes.size()-1;i++)
{
  if(count==k) break;
  else{
    if(binary_search(primes.begin(),primes.end(),(primes[i]+primes[i+1]+1)))
    {
        count++;
    }
  }
}
if(count==k)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

    return 0;
}