#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Define the custom comparator
struct cmp
{
  bool operator()(const pair<int, int> &a, const pair<int, int> &b)
  {
    // Custom comparison logic
    // Example: Compare based on the second element of the pair in descending order
    return a.second > b.second;
  }
};

int main()
{
  // Define the priority queue with the custom comparator
  priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;

  // Add elements to the priority queue
  pq.push({1, 5});
  pq.push({2, 3});
  pq.push({3, 8});

  // Pop elements from the priority queue
  while (!pq.empty())
  {
    pair<int, int> top = pq.top();
    pq.pop();
    cout << "Element: (" << top.first << ", " << top.second << ")\n";
  }

  return 0;
}
