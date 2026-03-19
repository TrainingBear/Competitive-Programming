#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

bool prime(int x){
    for (int i = 2; i*i <= x; i++) {
        if(x%i==0) return false;
    }
    return true;
}

void solve(){
    int x, k; cin >> x >> k;
    if(x>1 && k>1){
        cout << "NO" << endl;
        return;
    }
    if(x==1) cout << (k==2? "YES" : "NO") << endl;
    else cout << (prime(x)? "YES" : "NO") << endl;
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

