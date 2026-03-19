#include <bits/stdc++.h>
using namespace std;

int t, n , k;

void solve(){
    cin >> n >> k;
    if(n<3){
        cout << 1 << '\n';
        cout << 1 << '\n';
        return;
    }
    if(k == n || k == 1) {
        cout << -1 << '\n';
        return;
    }
    if(k&1){
        cout << 3 << '\n';
        cout << 1 << " ";
        cout << k-1 << " " << k+2 << '\n';
    } else {
        cout << 3 << '\n';
        cout << 1 << " " << k <<" " << k+1 << '\n';
    }
}

int main(){
    cin >> t; while(t--) solve();
}