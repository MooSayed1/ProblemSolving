// ﷽
// Contest: Codeforces Round 922 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1918/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 31 Jan 2024 12:09:42 AM EET
//
#include <bits/stdc++.h>
using namespace std;
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               
#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back

void solve() {
    int n, m;
    cin>>n>>m;
    printf("%d\n", n * (m / 2));

}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin>>t;
  while (t--)
    solve();  
  return 0;
}
