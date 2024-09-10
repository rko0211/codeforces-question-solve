#include <bits/stdc++.h>
using namespace std;
int main()
{

  for (int i = 1; i <= 100000; i++)
  {
    cout << (i / 2 + (i % 2 != 0)) << " " << ((i + 2 - 1) / (2)) << endl;
  }

  return 0;
}