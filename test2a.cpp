#include <bits/stdc++.h>
using namespace std;
long long int t, n, m;

void solve(){
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for(int i = 0; i < n; i++) { 
        cin >> a[i]; 
    }
    for(int i = 0; i < m; i++) cin >> b[i];


    long long cnt = 0;
    vector<long long> a2 = a;
    sort(b.begin(), b.end());
    sort(a2.begin(), a2.end());
    
    for(int i = 1; i < n; i++){
        if((a[i-1] > a[i])) {
            if(b[0]-a[i-1] >= a[i]){ 
                a[i-1] = b[0]-a[i-1];
            }else{
                cout << "NO\n"; 
                return;
            }
        }
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t; while(t--) solve();
}
// int l = 0, r = m;
            // long long ans = b[0];
            // while(l<=r){
            //     int mid = (l+r)/2;
            //     if(a[i-1] <= b[mid]){
            //         r -= mid-1;
            //         ans = b[mid];
            //     } else l += mid+1;
            // }
