#include <bits/stdc++.h>
using namespace std;

int n, a[1000005];

void solve(){
    cin >> n;
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
    }

    for(int i = 1; i < n; i++){
        if(a[i-1]-a[i] >= 0 && a[i] != 1){
            cout << "Alice\n";
            return;
        } else {
            cout << "Bob\n";
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}