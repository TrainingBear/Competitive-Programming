#include <bits/stdc++.h>
using namespace std;

int t, n, k;
const int MAXN = 1e5+5, MAXK = 1e3+5;
long a[MAXN];
pair<long, long> b[MAXK];

void solve(){
    cin >> k;
    for(int i = 0; i < k; i++) cin >> b[i].second;
    for(int i = 0; i < k; i++) cin >> b[i].first;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(b, b+k, [](auto&a, auto&b){
        return a.first < b.first
    });
    sort(a, a+n, greater<long>());;

    long long ans = 0;
    int ptr = 0, cnt = 0;
    for(int i = 0; i < n;){
        if(cnt >=b[ptr].second){
            cnt = 0;
            ptr++;
            continue;
        }
        ans+= a[i]*b[ptr].first;
        cnt++; i++;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}