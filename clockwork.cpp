#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve(){
    int n; cin >> n;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        int e; cin >> e;
        if(e < 2 * max(i-1, n-i)) flag = true;

    }
    if(flag) NO;
    else YES;
}

int main() {
    fast;
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

