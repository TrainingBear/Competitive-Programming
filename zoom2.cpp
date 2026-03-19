#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n, q; cin >> n >> q;
    ll sum[n+1];
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        sum[i+1] = sum[i] ^ x;
    }
    for(int i = 0; i < q; i ++){
        int l, r; cin >> l >> r;
        cout << (sum[l-1] ^ sum[r]) << '\n'; }
}
