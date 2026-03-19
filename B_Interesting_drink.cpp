#include <bits/stdc++.h>
using namespace std;
int n, q;
const int MAXN = 1e5+5;
long a[MAXN];
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ;i++) cin >> a[i];
    sort(a, a+n);
    cin >> q;
    for(int i = 0 ; i < q;i++){
        int x; cin >> x;
        int l = 0, r = n - 1;
        int ans = 0; 
        while (l <= r) {
            int mid = (l+r) / 2;
            if (x < a[mid]){
                r = mid-1;
            } else {
                ans = mid;
                l = mid+1;
            }
        }
        ans+=a[ans] <= x;
        cout << ans << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}