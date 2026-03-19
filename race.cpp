#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int bob = abs(b-c); 
    if(bob < abs(a-c) || bob < abs(a-b)) cout << "YES";
    else cout << "NO";
    cout << '\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}
