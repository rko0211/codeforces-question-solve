#include <bits/stdc++.h>
using namespace std;

bool check(vector<long long> &cards, long long mid, long long K)
{
  long long coins_needed = 0;
  for (int card : cards)
  {
    if (card < mid)
    {
      coins_needed += mid - card;
    }
  }
  return coins_needed <= K;
}

void maximizeArray(vector<long long> &cards, long long K)
{
  long long low = *min_element(cards.begin(), cards.end());
  long long high = *max_element(cards.begin(), cards.end()) + K;

  while (low < high)
  {
    long long mid = low + (high - low + 1) / 2;
    if (check(cards, mid, K))
    {
      low = mid;
    }
    else
    {
      high = mid - 1;
    }
  }

  long long remaining_coins = K;
  for (long long &card : cards)
  {
    if (card < low)
    {
      remaining_coins -= low - card;
      card = low;
    }
  }

  // Distribute the remaining coins
  for (int i = 0; i < cards.size() && remaining_coins > 0; i++)
  {
    cards[i]++;
    remaining_coins--;
  }
}
void solve()
{
  int n;
  cin >> n;
  long long k;
  cin >> k;
  vector<long long> cards(n);
  for (int i = 0; i < n; i++)
  {
    cin >> cards[i];
  }
  maximizeArray(cards, k);

  long long mini = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    mini = min(mini, cards[i]);
  }
  long long val = cards[0];
  long long ans = 0;
  bool flag = false;
  long long v;
  int last;
  for (int i = 0; i < n; i++)
  {
    // cout << cards[i] << " ";
    if (flag == false && cards[i] == val)
    {
      ans += val;
    }
    else
    {
      if (flag == false)
      {
        last = i + 1;
        ans += cards[i];
      }
      if (last + 1 == i + 1)
      {
        ans += (cards[i], mini);
      }
      else
      {
      }

      flag = true;
    }
  }
  cout << ans << endl;
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
