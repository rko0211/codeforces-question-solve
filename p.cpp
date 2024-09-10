#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n)
{
  vector<bool> isPrime(n + 1, true);
  isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers

  for (int i = 2; i * i <= n; ++i)
  {
    if (isPrime[i])
    {
      for (int j = i * i; j <= n; j += i)
      {
        isPrime[j] = false;
      }
    }
  }

  int primeCount = 0;
  for (int i = 2; i <= n; ++i)
  {
    if (isPrime[i])
    {
      ++primeCount;
    }
  }
  return primeCount;
}

int main()
{
  int n = 1000000;
  int numberOfPrimes = countPrimes(n);
  cout << "Number of primes from 1 to " << n << " is: " << numberOfPrimes << endl;
  return 0;
}
