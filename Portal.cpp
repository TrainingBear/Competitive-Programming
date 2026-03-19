#include <bits/stdc++.h>
using namespace std;
int const MAXN = 2e5+5;
int n, x, y, a[MAXN];

void solve(){
    cin >> n >> x >> y;
    y--;
    int mn = -1;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
        if(i >= x && i <= y){
            if (mn == -1 || a[mn] > a[i]) mn = i;
        }
    }
    int last = -1;
    for(int i = 0; i < n; i++){
        if(i >= x && i <= y) continue;
        if(a[i] <= a[mn] && mn != -1) {
            cout << a[i] << " ";
            last = i;
        }
        else break;
    }
    for(int i = mn; i <= y; i++) cout << a[i] << " ";
    for(int i = x; i < mn; i++) cout << a[i] << " ";
    for(int i = last+1; i < n; i++){
        if(i < x || i > y) cout << a[i] << " ";
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}