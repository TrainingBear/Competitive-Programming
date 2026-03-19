#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5+5;
int t, n, ans[MAXN];

inline void solve(){
    cin >> n;
    memset(ans, 0, sizeof(ans));

    ans[0]=1;
    ans[n-1]=2;

    int l = 1;
    int r = n-2;
    int x= n;
    while(l <= r){
        ans[l] = n--;
        if(l==r) break;
        ans[r] = n--;
        l++;
        r--;
    }

    for(int i = 0; i < x;i++) cout << ans[i] << " ";
    cout << '\n';
}

int main(){
    cin >> t; while(t--) solve();
}