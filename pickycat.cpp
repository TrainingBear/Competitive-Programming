#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    
    int med = n%2==0? n/2-1 : n/2;
    vector<int> arr(n);
    int min = INT_MAX;
    int neg = 0;
    for (int i = 0; i < n; i++) {
        int e; cin >> e;
        if(e < 0) neg++;
        if(e < min) min = e;
        arr[i] = e;
    }
    int target = arr[0];
    if(target==min && target < 0 && n > 2) cout << "NO" << endl;
    else cout << "YES" << endl;
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

