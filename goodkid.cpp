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
    int min = INT_MAX;
    int index = 0;
    for (int i = 0; i < n; i++) {
        int w; cin >> w;
        arr[i] = w;
        if(w < min) {
min = w;
index = i;
        }
    }
    arr[index] +=1;
    ll sum = 1;
    for(int i : arr) sum*=i;
    cout << sum << endl;
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

