#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to generate a permutation with maximum goodness
vector<int> generatePermutation(int N)
{

  vector<int> permu(N);
  if (N % 2 == 1)
  {
    int x = 1;
    int y = N - 1;
    for (int i = 0; i < N - 1; i++)
    {
      if (i % 2 == 0)
      {
        permu[i] = x;
        x++;
      }
      else
      {
        permu[i] = y;
        y--;
      }
    }
    permu[N - 1] = N;
  }
  else
  {
    int x = 1;
    int y = N;
    for (int i = 0; i < N; i++)
    {
      if (i % 2 == 0)
      {
        permu[i] = x;
        x++;
      }
      else
      {
        permu[i] = y;
        y--;
      }
    }
  }
  return permu;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int N;
    cin >> N;

    vector<int> permutation = generatePermutation(N);

    for (int i = 0; i < N; ++i)
    {
      cout << permutation[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
