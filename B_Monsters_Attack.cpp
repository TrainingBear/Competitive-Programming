#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll t, n, k;
const ll MAXN = 3e5+5;
ll a[MAXN], x[MAXN];

void solve(){
    cin >> n >> k;
    vector<pair<ll,ll>> coor(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> x[i];
        coor[i] = pair(abs(x[i]), i);
    }
    sort(coor.begin(), coor.end(), [](auto&a, auto&b){
        return a.first < b.first;
    });

    ll t = 0;
    ll bonus = 0;
    for(int i =0; i < n; i ++){
        pair<ll, ll> p = coor[i];
        ll time = p.first - t;
        ll health = a[p.second]-bonus;
        bonus = max(0LL, bonus - a[p.second]);
        if((k*time) < health){
            cout << "NO\n";
            return;
        }
        ll d = (health/k) + health%k != 0;
        bonus = (d*k)-health;
        t += d;
    }
    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >>t; while(t--) solve();
}
