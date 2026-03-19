#include <bits/stdc++.h>
using namespace std;
long long x, y;
void solve(){
    cin >> x >> y;
    if(y > 0){
        x-= (2*y);
    }
    if(y < 0){
        x-= (4*abs(y));
    }
    if(x%3!=0 || x < 0){
        cout << "NO\n";
    }
    else cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}