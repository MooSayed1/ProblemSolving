// ﷽
// Contest: Codeforces Round 938 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1955/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 09 Apr 2024 12:04:46 AM EET
//
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#ifdef MOHAMED
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define endl "\n"

template <typename T> istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data)
    input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {

  for (const T &x : data)
    output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

void solve() {
  int n, c, d;
  cin >> n >> c >> d;
  vi a(n * n, 0);
  cin >> a;
  sort(all(a));
  multiset<int> ss;
  for (auto &it : a) {
    ss.insert(it);
  }
  int temp = a[0];
  for (int i = 0; i < n; ++i) {
    auto it = ss.find(temp);
    if (it == ss.end()) {
      puts("NO");
      return;
    }
    ss.erase(it);
    int x = temp;
    for (int j = 1; j < n; ++j) {
      x += d;
      it = ss.find(x);
      if (it != ss.end())
        ss.erase(it);
      else {
        puts("NO");
        return;
      }
    }
    temp += c;
  }

  puts("YES");
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
