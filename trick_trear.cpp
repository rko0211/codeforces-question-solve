#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll countWaysToDistributeSweets(int M, int N, vector<int> &A, vector<int> &B)
{
  unordered_map<int, int> candyRemainders;
  for (int i = 0; i < N; ++i)
  {
    int remainder = A[i] % M;
    candyRemainders[remainder]++;
  }

  ll count = 0;
  for (int j = 0; j < N; ++j)
  {
    int remainder = B[j] % M;
    int requiredRemainder = (M - remainder + M) % M;
    if (candyRemainders.find(requiredRemainder) != candyRemainders.end())
    {
      count += candyRemainders[requiredRemainder];
    }
  }

  return count;
}

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i)
    {
      cin >> A[i];
    }
    for (int i = 0; i < N; ++i)
    {
      cin >> B[i];
    }
    cout << countWaysToDistributeSweets(M, N, A, B) << endl;
  }
  return 0;
}
