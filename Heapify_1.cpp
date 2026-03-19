#include <bits/stdc++.h> 
using namespace std;

const int MAXN = 2e5+5;
int t, n, a[MAXN];

inline void solve(){
    cin >> n;
    for(int i = 1 ; i <= n;i++) cin >> a[i];
    for(int i = 1 ; i <= n; i++){
        if(a[i] != i && i % a[i] !=0 ){
            bool flag = 1;
            for(int j = i*2; j <= n; j*=2){
                if(a[i]==j) {
                    flag = 0;
                    break;
                }
            }
            if(flag) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t; while(t--) solve();
}