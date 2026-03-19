#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    int diff = 0;
    int E = 0, O = 0;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        bool i_0 = i%2==0;
        bool ith_0 = k%2==0;
        if((i_0 ^ ith_0)) {
            if(ith_0) E++;
            else O++;
            diff++;
        }
    }
    if(diff%2==0 && (E==O)) cout << diff/2 << endl;
    else cout << -1 << endl;
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

