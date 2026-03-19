#include <bits/stdc++.h>
using namespace std;
#define ll long long

int t, p, q;

void solve(){
    cin >> p >> q;
    int total = p*p + q*q + 1;
    if(total%4!=0) cout << -1;
    else cout << total/4;
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    // cin >> t; while(t--) 
    solve();
}