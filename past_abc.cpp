#include <bits/stdc++.h>
using namespace std;
int main()
{

  string s;
  cin >> s;
  string temp = "";
  temp += s[3];
  temp += s[4];
  temp += s[5];
  // cout << stoi(temp) << endl;
  if (stoi(temp) >= 1 && stoi(temp) <= 349)
  {
    if (stoi(temp) == 316)
    {
      cout << "No\n";
    }
    else
    {
      cout << "Yes\n";
    }
  }
  else
  {
    cout << "No\n";
  }

  return 0;
}