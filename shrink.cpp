#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using v = vector<long long>;
using p = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
void bismilah(){ ios::sync_with_stdio(false); cin.tie(nullptr); } 

void solve(){
    int n; cin >> n;
    cout << 1 << " ";
    for (int i = 3; i <= n; i++) {
        cout << i << " ";
    }
    cout << 2 << '\n';
}

int main() {
    bismilah();
    
    int t = 1;
    cin >> t; while (t--) { solve(); }

    return 0;
}

