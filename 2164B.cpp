#include <bits/stdc++.h>
using namespace std;

int t, n;
const int MAXN = 1e5+5;
long arr[MAXN];

void solve(){
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++){
        long x = arr[i];
        for(int j = i+1; j < n; j++){
            long y = arr[j];
            if(x < y && (y%x)%2==0){
                cout << x << " " << y << '\n';
                return;
            }
        }
    }
    cout << -1 << '\n';
}

int main(){
    cin >> t; while (t--)
    {
        solve();
    }
}
