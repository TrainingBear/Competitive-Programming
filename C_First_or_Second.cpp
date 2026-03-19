#include <bits/stdc++.h>
using namespace std;

int t, n;
const int MAXN = 2e5+5;
long a[MAXN];

void solve(){
    cin >> n; for(int i  =0; i < n;i++){
        cin >> a[i];
    }

    int l = 0;
    int r= 1;
    long long ans = 0;
    while(true){
        if(r >=n) break;
        while(a[l] >= 0 && a[r] >= 0 && r < n){
            ans += a[l];
            l = r++;
        }
        while(a[l] < 0 && a[r] < 0 && r < n) {
            ans -= a[r];
            r++;
        }
        long long sumr = 0;
        int ptr = r;
        while(a[ptr] >= 0 && ptr < n) sumr+=a[ptr++];
        if(a[l] > 0 && a[r] < 0){
            long long sum = 0;
            long long mx = -1;
            while(a[r] < 0 && r < n) {
                if(mx==-1||a[mx]<a[r]) mx = r;
                sum-=a[r++];
            }
            if(a[l] > -a[mx]){
                sum+=a[mx];
                sum+=a[l];
                l = r++;
            } 
            ans+=sum;
        }
        else if (sumr>0&& a[l] > -sumr && r < n || (sumr == 0 && a[l] > -a[r] && r < n)) {
            ans += a[l];
            l = r++;
        }
        else {
            ans-=a[r];
            r++;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t; while(t--) solve();
}