#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    int l = n, r = n;
    if((arr[0]+arr[n-1])%2==0) {
        cout << 0 << '\n';
        return;
    }
    for(int i = 1; i < n; ++i){
        if(arr[i]%2 != arr[0]%2){
            r = i;
            break;
        }
    }
    for(int i = 1; i < n; ++i) 
        if(arr[n-i-1]%2 != arr[n-1]%2){
            l = i;
            break;
        }
    cout << min(l, r) << '\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}
