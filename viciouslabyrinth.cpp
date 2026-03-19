#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k; 
    cin >> n >> k;
    long long t = k%n;
    k = t;
    vector<int> a(n);
    for(int i = 1; i <= n; i++){
        int e = min(n-(k), n);
        if(i==n){
            e = n-(t-1);
            if(t-1<=1) cout << n-1 << " ";
            else cout << e << " ";
        }
        else if(i==e && k-1 > 0){
            k--;
            e = n-(k);
            cout << e << " ";
        }else {
            cout << e << " ";
        }
    }
    cout << '\n';
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t; while(t--) solve();
}
