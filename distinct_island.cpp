#include <bits/stdc++.h>
using namespace std;

void dfs(int r, int c, vector<pair<int, int>> &vec, vector<vector<int>> &grid, vector<vector<bool>> &vis,
         int row0, int col0)
{

  vis[r][c] = true;
  vec.push_back({r - row0,
                 c - col0});
  int drow[] = {-1, 0, +1, 0};
  int dcol[] = {0, -1, 0, +1};
  for (int i = 0; i < 4; i++)
  {
    int nr = r + drow[i];
    int nc = c + dcol[i];
    if (nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size() && !vis[nr][nc] && grid[nr][nc] == 1)
    {

      //   if ((r - nr) == 1 && (c - nc) == 0)
      //   {
      //     s += "U";
      //   }
      //   else if ((r - nr) == -1 && (c - nc) == 0)
      //   {
      //     s += "D";
      //   }

      //   else if ((r - nr) == 0 && (c - nc) == 1)
      //   {
      //     s += "L";
      //   }
      //   else if ((r - nr) == 0 && (c - nc) == -1)
      //   {
      //     s += "R";
      //   }

      dfs(nr, nc, vec, grid, vis, row0, col0);
    }
  }
}

int main()
{
  int row = 4;
  int col = 5;
  vector<vector<int>> grid(row, vector<int>(col));
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> grid[i][j];
    }
  }

  vector<vector<bool>> vis(row, vector<bool>(col, false));
  set<vector<pair<int, int>>> us;
  for (int i = 0; i < row; i++)
  {

    for (int j = 0; j < col; j++)
    {

      if (grid[i][j] == 1 && vis[i][j] == false)
      {
        vector<pair<int, int>> vec;
        dfs(i, j, vec, grid, vis, i, j);
        us.insert(vec);
      }
    }
  }

  cout << us.size() << endl;

  return 0;
}