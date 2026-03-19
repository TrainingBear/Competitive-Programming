#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int a, b,c; cin >> a>> b>> c;
    if(a<b && b<c) cout << "STAIR" <<endl;
    else if(a<b && b>c) cout << "PEAK" <<endl;
    else cout << "NONE" <<endl;
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

