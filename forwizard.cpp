#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    int ans = 0; 
    int l = 0, r = 0;
    for(int i = 0; i < n; i++){
        int besar = 0, kecil = 0;
        for(int j = i+1; j < n; j++){
            besar += a[j] > a[i];
            kecil += a[j] < a[i];
            if(ans > (besar - kecil)){
                ans = besar - kecil;
                l = i;
                r = j;
            }
        }
    }
    cout << l+1 << " " << r+1 << '\n';
}
int main(){ 
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--)solve();
}
