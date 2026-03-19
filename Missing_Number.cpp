#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
int n, cnt[MAXN];

inline void solve(){
    cin >> n;
    for(int i = 0; i < n-1; i++){
        int x; cin >> x;
        cnt[x] = 1;
    }
    for(int i = 1; i <= n; i++){
        if(cnt[i]==0){
            cout << i << '\n';
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}