#include <bits/stdc++.h>
#include <climits>
#include <utility>
using namespace std;
using ll = long long;
using v = vector<long long>;
using p = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
void bismilah(){ ios::sync_with_stdio(false); cin.tie(nullptr); } void yes(){ cout << "YES\n"; } void no(){ cout << "NO\n"; }

void solve(){
    int n; cin >> n;
    v arr(n+1);
    arr[0] = 0;
    int min = INT_MAX;
    int cost = 0;
    for (int i = 1; i < n; i++) cin >> arr[i];
    for (int i = 0; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            
        }
        cost+=arr[i+1];
        swap(arr[i], arr[i+1]);
    }
}

int main() {
    bismilah();
    
    int t = 1;
    cin >> t; while (t--) { solve(); }

    return 0;
}

