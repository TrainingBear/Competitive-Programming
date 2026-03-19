#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3e5+5;
int t, n, a[MAXN]; 

inline void solve(){
    cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 1 ; i < n ;i++){
        if(
            (a[i-1]==a[i]) ||
            a[i-1]==(7-a[i])
        ){
            a[i] = i+1 < n && a[i+1] == a[i]+1? a[i-1]-1 : a[i]+1;
            ans++;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t; while(t--) solve();
}