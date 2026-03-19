#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

void solve(){
    int n; cin >> n;
    if(n%2==0){
        cout << gcd(n, n/2) << endl;
    }
    else cout << gcd(n-1, (n-1)/2) << endl;
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

