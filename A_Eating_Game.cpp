#include <bits/stdc++.h>
using namespace std;
int n, a[15], cnt[15];
void solve(){
    cin >> n;
    int mx = -1;
    memset(cnt, 0, sizeof(cnt));
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
        if(mx == -1 || a[mx] < a[i]){
            mx = i;
        }
    }
    cout << cnt[a[mx]] << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}