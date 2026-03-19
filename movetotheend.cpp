#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    int arr[n];
    int sum = INT_MIN;
    for (int i = 0; i < n; i++) {
        int e; cin >> e;
        arr[i] = e;
        if(e>sum) sum = e;
    }
    cout << e << " ";
    for (int i = 0; i < n; i++) {
        
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

