#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
bool ispossible(int num)
{
  while (num > 0)
  {
    if (num % 3 == 2)
    {
      return true;
    }
    num /= 3;
  }
  return false;
}
void solve()
{
  int n;
  cin >> n;
  if (n == 3)
  {
    cout << 1 << " " << 3 << " " << 2 << endl;
    return;
  }
  int i = 1;
  int j = n;
  if (ispossible((i + j)))
  {
    for (int k = j; k >= i; k--)
    {
      cout << k << " ";
    }
    return;
  }
  j--;
  int ind1;
  int ind2;
  while (j > 0)
  {
    if (ispossible((j + 1)) && ispossible(((j + 1) + n)))
    {
      ind1 = j;
      ind2 = (j + 1);
      break;
    }
    j--;
  }
  for (int k = ind1; k >= 1; k--)
  {
    cout << k << " ";
  }
  for (int k = n; k >= ind2; k--)
  {
    cout << k << " ";
  }
  cout << endl;
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
