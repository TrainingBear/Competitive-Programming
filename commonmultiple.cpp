#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    set<int> s;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << s.size() << '\n';
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t; while (t--) solve();
}
