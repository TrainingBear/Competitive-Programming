#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+5;
long long n, k, x, a[MAXN], b[MAXN];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n >> k >> x;
    for(int i = 0; i < n;) {
        cin >> a[i];
        i++;
    }
    for(int i = 0; i < n; i+=1)  cin >> b[i];

    int r = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        while(x-a[r] > k && r < n) {
            r++;
        }
        ans+=b[r];
    }
    cout << ans << '\n';
}
