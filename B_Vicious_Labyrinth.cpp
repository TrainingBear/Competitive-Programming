#include <bits/stdc++.h>
using namespace std;
#define l long 

l t, n, k;

void solve(){
    cin >> n >> k;
    if(k==1){
        for(int i = 0; i < n-1; i++){
            cout << n << " ";
        }
        cout << n-1;
    }
    else if((k&1 || (k==n&&k&1)) && n>2){
        for(int i = 0; i < n-1; i++){
            cout << n << " ";
        }
        cout << n-1 << " ";
    }else {
        for(int i = 0; i < n-2; i++){
            cout << n-1 << " ";
        }
        cout << n << " " << n-1;
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t; while(t--) solve();
}