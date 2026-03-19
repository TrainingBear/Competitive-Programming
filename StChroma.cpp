#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n, x; cin >> n >> x;
    if(n<=1) {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if(i==n-1){
            if(n!=x) cout << x << endl;
            else cout << i << endl;
            return;
        }
        if(i==x || skip){
            cout << i+1 << " ";
            continue;
        }
        cout << i << " ";
    }
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

