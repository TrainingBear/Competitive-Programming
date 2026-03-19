#include <bits/stdc++.h>
using namespace std;

int n, mn, mx, x;
long sum;

void solve(){
    cin >> n;
    sum = 0;
    mn = INT_MAX;
    mx = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum+=x;
        mn = min(x, mn==INT_MAX? mn : ++mn);
        mx = max(x, mx==INT_MIN? mx : ++mx);
        cout << mn << " " << mx << " ";
        cout << fixed << setprecision(4)
        << (sum + (i/2.0 * (2.0+(i-1)))) / (i + 1.0);
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}