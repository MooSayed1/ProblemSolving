// ﷽
// Contest: Codeforces Round 950 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1980/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 03 Jun 2024 05:54:38 PM EEST
//
#include <bits/stdc++.h>
using namespace std;
#ifdef MOHAMED
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define pii pair<int, int>
#define OO 2e9
#define endl "\n"

template <typename T>
istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data) input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {
  for (const T &x : data) output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

void solve() {

  int n;
  cin >> n;
  vi arr(n), brr(n);
  cin >> arr >> brr;
  int m;
  cin >> m;
  multiset<int> st;
  int end = 0;
  for (int i = 0; i < m; ++i) {int x;cin >> x;st.insert(x);end = x;}
  if (find(all(brr), end) == brr.end()) {no;return;}

  for (int i = 0; i < n; ++i) {
    if (arr[i] != brr[i]) {
      auto it = st.find(brr[i]);
      if (it != st.end()) {
        arr[i]=brr[i];
        st.erase(it);
      } else {
        no;
        return;
      }
    }
  }
  yes;
}

int32_t main() {
  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
