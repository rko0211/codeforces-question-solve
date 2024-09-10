#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  cin >> n;

  int row = (n);
  int col = 2 * n + 1;
  // int a[row][col];
  vector<vector<int>> a(row + 1, vector<int>(col, -1));
  // for (int i = 0; i <= row; i++)
  // {
  //   for (int j = 0; j < col; j++)
  //   {
  //     a[i][j] = -1;
  //   }
  // }

  int mid = row;

  int col1 = mid;
  int col2 = mid;

  for (int i = 0; i <= row; i++)
  {
    int val = 0;

    for (int j = col1; j <= mid; j++)
    {
      a[i][j] = val;
      val++;
    }
    val -= 2;

    for (int j = mid + 1; j <= col2; j++)
    {
      a[i][j] = val;
      val--;
    }
    col1--;
    col2++;
  }
  // cout << "    ";
  // cout << endl;
  vector<vector<int>> v;

  for (int i = 0; i <= row; i++)
  {
    vector<int> ds;
    for (int j = 0; j < col; j++)
    {

      ds.push_back(a[i][j]);
    }

    v.push_back(ds);
    // cout << endl;
  }

  for (int i = 0; i < v.size(); i++)
  {

    for (int j = 0; j < v[i].size(); j++)
    {
      if (v[i][j] == -1)
      {
        cout << " "
             << " ";
      }
      else
      {
        cout << v[i][j] << " ";
      }
    }
    cout << endl;
  }

  for (int i = v.size() - 2; i >= 0; i--)
  {
    for (int j = 0; j < v[i].size(); j++)
    {
      if (v[i][j] == -1)
      {
        cout << " "
             << " ";
      }
      else
      {
        cout << v[i][j] << " ";
      }
    }
    cout << endl;
  }

  return 0;
}