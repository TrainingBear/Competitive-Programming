#include <bits/stdc++.h>
using namespace std;

int n, d, a[100000];

void solve(){
    cin >> n >> d;
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    int l = 0;
    for(int r = 0; r < n; r++){
        cin >> a[r];
        while(l < r && a[l] < a[r]-d){
            l++;
        }
        if(a[l]==a[r]-d) ans++;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}