#include <bits/stdc++.h>
using namespace std;

int t, n, x;
bool a[15];

inline void solve(){
    cin >> n >> x;
    memset(a, false, sizeof(a));
    for(int i = 0; i < n;i++) cin >> a[i];
    bool flag = 0;
    for(int i=0;i<n;i++){
        if(a[i] || flag) {
            flag = 1;
            x--;
        }
        if(x < 0 && a[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
cin>> t; while(t--)solve();}