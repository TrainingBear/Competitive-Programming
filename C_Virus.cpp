#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+5;
long long n, m, a[MAXN];
pair<long long, int> d[MAXN];

void solve(){
    cin >> n >> m;
    for(int i = 0 ; i < m; i++) cin >> a[i];
    sort(a, a+m);
    d[0] = {a[0]-1 + (n-a[m-1]), 0};
    for(int i = 1; i < m; i++){
        d[i] = {a[i]-a[i-1]-1, i};
    }
    sort(d, d+m, [](auto&a, auto&b){
        return a.first > b.first;
    });


    int spread = 0;
    long long ans = n;
    for(int i = 0; i < m; i++){
        if(d[i].first-(2*spread)==1) {
            ans--;
        }
        if(d[i].first-1-(2*spread) < 0) break;
        ans -= d[i].first-1-(2*spread);
        spread+=2;
    }

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}