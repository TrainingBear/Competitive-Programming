#include <bits/stdc++.h>
using namespace std;

int t, n, a;
const int MAXN = 3e5+5;

void solve(){
    cin >> n >> a;
    int l = 0;
    int r = 0;
    for(int i = 1; i <= n; i++){
        long b; cin >> b;
        if(a > b) l++;
        if(a < b) r++;
    }
    cout << (l>r? a-1 : a+1) << '\n';
}

int main(){
    cin >> t; while(t--)solve();
}