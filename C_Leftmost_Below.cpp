#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5;
long long n, a[MAXN];

void solve(){
    cin >> n;
    int mn = -1;
    bool flag = 0;
    for(int i = 0 ; i< n;i++) {
        cin >> a[i];
        if(mn == -1 || a[mn] > a[i]) {
            mn = i;
            continue;
        }
        if(a[mn] <= a[i]/2 && a[i]!=1) {
            flag = 1;
        }
    }
    if(flag)
            cout << "NO\n";
            else cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}