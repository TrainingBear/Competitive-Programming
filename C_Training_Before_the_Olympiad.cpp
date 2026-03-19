#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+5;
long t, n, a[MAXN];
void solve(){
    cin >> n;
    long long sum = 0;
    for(int i = 0; i < n;i++) {
        cin >> a[i];
        sum+=a[i];
        cout << (sum/2)*2 << " ";
    }
    cout << '\n';
    /* if(n==1) {
        cout << a[0] << '\n';
        return;
    } */
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t; while(t--) solve();
}