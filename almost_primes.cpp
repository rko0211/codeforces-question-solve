#include<bits/stdc++.h>
using namespace std;
bool isprime[3001];
int main()
{
// initially all are prime
for(int i=0;i<3001;i++)
isprime[i]=true;

int n;
cin>>n;
// sieve algorithm --> O(N*LOGLOG(N))
for(int i=2;i*i<=n;i++)
{
  if(isprime[i])
  {
    for(int j = i*i;j<=n;j+=i)
    {
        // Not prime number
        isprime[j]=false;
    }
  }
}
vector<int>primes;
for(int i=2;i<=n;i++)
{
 if(isprime[i]==true)
 {
    primes.push_back(i);
 }
}
int ans=0;
for(int i=1;i<=n;i++)
{
    int divisor=0;
    for(auto it:primes)
    {
        if(i%it==0)
        {
          divisor++;
        }
    }
    if(divisor==2)
    {
        ans++;
    }
}
cout<<ans<<endl;
    return 0;
}