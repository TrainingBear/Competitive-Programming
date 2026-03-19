#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    int max = INT_MIN, min = INT_MAX;
    while(n--){
        int t; cin >> t;
        if(t>max) max = t;
        if (t<min) min = t;
    }
    cout << max-min << endl;
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

