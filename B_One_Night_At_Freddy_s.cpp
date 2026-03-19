#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5;
int n, m, l, a[MAXN], d[2];

void solve(){
    cin >> n >> m >> l;
    memset(d, 0, sizeof(d));
    for(int i = 0; i < n;i++) cin >> a[i];

    long long dangger = 0;
    int j = 0;
    m = min(m, 2);
    for(int i = 0; i < n; i++){
        dangger = d[j];
        int sekon = i ? a[i]-a[i-1] : a[i];
        dangger += (sekon-d[j])/m;

        int next = (j+1)%m;
        if(d[j] > sekon) {
            d[next] = sekon;
        } else d[next] = dangger;
        d[j] = 0;
        j = next;
    }
    dangger = d[j];
    dangger += (l-a[n-1]);
    cout << dangger << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}