#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll t, n, k;

void solve(){
    cin >> n >> k;
    if(n==1){
        cout << k << '\n';
        return;
    }

    ll a = k/2;
    cout << a << " "<< k-a << " ";
    for(int i = 0; i < n-2; i++){
        cout << 0 << " ";
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> t; while(t--) solve();
}