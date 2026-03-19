#include <bits/stdc++.h>
using namespace std;

int t, n, m;

void solve(){
    cin >> n >> m;
    cout << (1 << n*m-1)%998244353 << '\n';
}

int main(){
    solve();
}