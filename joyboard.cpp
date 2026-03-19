#include <bits/stdc++.h>
using namespace std;
#define ll long long int
long long t, n, m, k;
void solve(){
    cin >> n >> m >> k;
    if(k==1) cout << 1;
    else if(k==2 && n <= m) cout << m;
    else if(k==2 && m > n) cout <<  
    cout << '\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cint >> t;
    while(t--)solve();
}
