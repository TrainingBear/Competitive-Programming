#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
inline void solve(){
    cin >> n;
    if(n<=3 && n != 1){
        cout << "NO SOLUTION\n";
        return;
    }
    for(int i = 2; i <= n; i+=2) cout << i << " ";
    for(int i = 1; i <= n; i+=2) cout << i << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}