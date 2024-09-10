#include <bits/stdc++.h>
using namespace std;
int main()
{

  vector<string> s;
  s.push_back("zzzzzzzzzzzz");
  s.push_back("abbbbbbbbbbssb");
  sort(s.begin(), s.end());
  for (auto &it : s)
  {
    cout << it << " " << endl;
  }
  string c = "axcd  d";
  // c.pop_back();
  cout << c << endl;

  return 0;
}