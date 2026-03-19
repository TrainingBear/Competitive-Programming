#include <bits/stdc++.h>
using namespace std;

struct triple{
    long long first, second;
    int third;
};

int const MAXN = 2e5+5;
long long n, m;
triple a[MAXN];
void solve(){
    cin >> n >> m;
    for(int i = 0 ; i < m; i++) {
        long long x, w; cin >> x >> w;
        a[i] = {x, w, i+1};
    }
    long long ans = 0;
    sort(a, a+m, [](auto&a, auto&b){
        return a.second < b.second;
    });
    sort(a, a+(2*n), [](auto&a, auto&b){return a.first < b.first;});
    for(int i = 0 ; i < 2*n; i++) ans+=a[i].second;

    int l = 0, r = (2*n)-1;
    cout << ans << '\n';
    while(l < r){
        cout << a[l].third << " " << a[r].third << '\n';
        l++;r--;
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}