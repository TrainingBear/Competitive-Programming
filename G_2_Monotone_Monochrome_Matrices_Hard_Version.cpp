#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
 
    vector<int> in(n + 1, 0);
    vector<int> out(n + 1, 0);
    vector<int> freq(n + 1, 0);
 
    unsigned long long sumIn = 0;
    unsigned long long sumFreq = 0;
 
    for (int i = 0; i < q; ++i) {
        int u, v;
        cin >> u >> v;
 
        sumIn += 2ULL * in[v] + 1;
        in[v]++;
 
        int cur = out[u];
        sumFreq += 2ULL * freq[cur + 1] + 1;
        freq[cur + 1]++;
        out[u]++;
 
        cout << (sumIn == sumFreq ? "YES\n" : "NO\n");
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}