#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;

inline void solve(){
    cin >> n;
    while(n!=1){
        cout << n << " ";
        if(n&1) {
            n*=3;
            n++;
        } else n/=2;
    }
    cout << 1 << " ";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}