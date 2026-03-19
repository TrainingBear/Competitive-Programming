#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+5;
long long n, x, a[MAXN];

void solve(){
    cin >> n >> x;
    for(int i = 0 ; i < n; i++) cin >> a[i];
    sort(a, a+n, greater<long long>());
    int ptr = n;
    long long s = 0;
    long long point = 0;
    vector<long long> ans;
    for(int i = 0 ; i < ptr; i++){
        s+=a[i];
        while(s < x && i < ptr-1){
            ptr--;
            s+=a[ptr];
            ans.push_back(a[ptr]);
        }
        if(s >= x) point+=a[i];
        ans.push_back(a[i]);
        s%=x;
    }
    cout << point << '\n';
    for(auto&a:ans) cout << a << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t; while(t--) solve();
}