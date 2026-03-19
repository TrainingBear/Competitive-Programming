#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline void solve(){
    int n;
    cin >> n;
    vector<long> a(n);
    for(int i =0 ; i < n; i++) cin >> a[i];

    vector<long> plot;
    for(int i = 0; i < n; i++){
        
        auto it = upper_bound(plot.begin(), plot.end(), a[i]);
        if(it==plot.end()) plot.push_back(a[i]);
        else *it = a[i];
    }
    cout << plot.size() << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}