#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n, m; 
    cin >> n >> m;
    bool yes = false;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if(k==m) {
            yes = true;
            continue;
        }
    }
    if(yes) cout << "YES"<<endl;
    else cout << "NO" << endl;
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

