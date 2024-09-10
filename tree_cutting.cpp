#include <iostream>
#include <vector>

using namespace std;

class TreeNode
{
public:
  int val;
  vector<TreeNode *> children;

  TreeNode(int x) : val(x) {}
};

TreeNode *constructTree(int n, vector<pair<int, int>> &edges)
{
  vector<TreeNode *> nodes(n);
  for (int i = 0; i < n; ++i)
  {
    nodes[i] = new TreeNode(i + 1);
  }

  for (const auto &edge : edges)
  {
    nodes[edge.first - 1]->children.push_back(nodes[edge.second - 1]);
  }

  return nodes[0]; // return root
}

void printTree(TreeNode *root)
{
  if (!root)
    return;

  cout << root->val << ": ";
  for (TreeNode *child : root->children)
  {
    cout << child->val << " ";
  }
  cout << endl;

  for (TreeNode *child : root->children)
  {
    printTree(child);
  }
}
void solve()
{
  int n, k;
  cin >> n >> k;
  int u, v;
  vector<pair<int, int>> edges;
  for (int i = 0; i < n - 1; i++)
  {
    cin >> u >> v;
    edges.push_back({u, v});
    // cout << u << " " << v << endl;
  }
  TreeNode *root = constructTree(n, edges);
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
