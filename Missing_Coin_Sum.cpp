#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
static long n, a[MAXN], pref[MAXN];

inline void solve(){
    cin >> n;
    memset(pref, 0, sizeof(pref));

    map<long, int> cnt;
    cnt[0]++;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    sort(a, a+n);
    ll last = 1;
    ll sum = 1;
    for(int i = 0; i < n && sum >= a[i]; i++){
        sum+=a[i];
    }
    cout << sum << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}