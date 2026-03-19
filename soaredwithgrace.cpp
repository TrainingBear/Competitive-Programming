#include <bits/stdc++.h>
using namespace std;
int t =0;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int j = n-1-i;
        if(a[i]!=b[j]){
            auto it = find(b.begin(), b.end(), a[i]);
            int jj = it-b.begin();
            swap(b[j], b[jj]);
            swap(a[j], b[jj]);
            cnt++;
        }
    }
    cout << cnt << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while(t--) solve();
}
