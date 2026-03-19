#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n, k; cin >> n >> k;
    vector<int> arr(n, 0);
    int min = 1;
    for (int i = k-1; i < n; i+=k) {
        arr[i] = min++;
    }
    int t = min;
    for (int i = 0; i < n; i++) {
        if(arr[i]==0) cout << t++ << " ";
        else {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
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

