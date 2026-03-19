#include <bits/stdc++.h>
using namespace std;

int t, n;
const int MAXN = 3e5+5;
long arr[MAXN];

inline void solve(){
    cin >> n; for(int i = 0; i < n;i++) cin >> arr[i];
    if(n <= 2) {
        cout << n << '\n';
        return;
    }
    long a = 0;
    for(int i = 0; i < n-1; i++){
        a+= a[i] - a[i+1];
    }
}