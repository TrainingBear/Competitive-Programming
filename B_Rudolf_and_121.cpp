#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5;
long n, a[MAXN];

void solve(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    int i = 0;
    for(; i+2 < n; i++){
        if(a[i] < 0) {
            cout << "NO\n";
            return;
        }
        if(i-1 < 0 || a[i-1] == 0){
            a[i+1] -= 2*a[i];
            a[i+2] -= a[i];
            a[i] = 0;
        }
    }
    if(a[n-2] != 0 || a[n-1] != 0){
        cout << "NO\n";
    }
    else cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}