#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto& i : a) cin >> i;
    vector<int> b({a[n-1]});
    for(int i = n -2; i >= 0; --i){
        if(a[i] > b.back()){
            b.push_back(a[i] % 10);
            b.push_back(a[i] / 10);
        }
        else 
            b.push_back(a[i]);
        
    }
    cout << (is_sorted(b.rbegin(), b.rend())? "YES" : "NO") << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
}

