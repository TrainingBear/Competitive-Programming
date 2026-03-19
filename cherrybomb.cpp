#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n, k; cin >> n >> k;
    int a[n], b[n];
    int x = -1;
    int max = INT_MIN;
    int min = INT_MAX;
    bool valid = true;
    for (int i = 0; i < n; i++) {
        int ax; cin >> ax;
        a[i] = ax;
        if(ax > max) max = ax;
        if(ax < min) min = ax;
    }
    for (int i = 0; i < n; i++) {
        int bx; cin >> bx;
        b[i] = bx;
        if(x==-1 && bx != -1) {
            x = a[i]+bx;
            if(x<max) valid = false;
        }
        else if(bx!=-1 && a[i]+bx!=x) valid = false;
    }
    if(!valid){
        cout << 0 << endl;
        return;
    }
    if(x==-1){
        cout << k-(max-min)+1 << endl;
    }else {
        for (int i = 0; i < n; i++)
        if(x-a[i] > k || (b[i]!=-1 && a[i]+b[i] != x)){
           cout << 0 << endl;
           return; 
        }
        cout << 1 << endl;
    }
}

int main() {
    fast;
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

