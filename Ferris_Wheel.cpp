#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
long n, x;
// , a[MAXN];

inline void solve(){
    cin >> n >> x;
    vector<long> a(n);
    for(int i = 0 ; i < n; i++) cin >> a[i];

    // sort(a, a+n);
    sort(a.begin(), a.end());
    sort(a.begin(), a.end());

    int l = 0, r = n - 1;
    int ans = 0;

    while (l <= r) {
        if (a[l] + a[r] <= x) {
            l++;
            r--;
        } else {
            r--;
        }
        ans++;
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t--)
        solve();
}