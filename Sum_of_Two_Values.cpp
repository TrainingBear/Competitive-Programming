#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
long n, x;

inline void solve(){
    cin >> n >> x;
    vector<pair<long, int>> a;
    for(int i = 0 ; i < n ; i++) {
        long x; cin >> x;
        a.emplace_back(x, i+1);
    }
    sort(a.begin(), a.end());
    for(int i = 0 ; i < n; i++){
        int d = x-a[i].first;
        if(d < 0) continue;
        int l = 0;
        int r = n-1;
        while(l < r){
            int mid = (l+r)/2;
            if(d <= a[mid].first) r = mid;
            else l = mid+1;
        }
        if(a[r].first==d && a[i].second != a[r].second){
            // cout << d << ": " << a[r].first << "->" << a[r].second << '\n';
            cout << a[i].second << " " << a[r].second << '\n';
            return;
        }
    }
    cout << "IMPOSSIBLE\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}