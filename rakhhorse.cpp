#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, k; cin >> n >> m >> k;
    string a; cin >> a;
    int timar = 0;
    bool flag = true; 
    int c = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == '1') c = 0;
        else {
            c++;
            if(c==m){
                timar++;
                c = 0;
                i+=k-1;
            }
        }
    }
    cout << timar << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; 
    while(t--) solve();
}
