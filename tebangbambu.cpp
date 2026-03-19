#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n, m; cin >> n >> m;
    ll k; cin >> k;
    ll arr[n];
    for(int i = 0; i < n; i ++) cin >> arr[i];
    sort(arr, arr+n);
    ll ans = 0;
    for(int i = n-1; i > m; i--){
        ll mn = arr[i-m];
        for(int j = i; j < i-m; j--){
            if(arr[j]==mn) continue;
            if(arr[j]-mn > k) {
                break;
            }
            else arr[j]-=mn;
        }
        i-=(m-1);
        ans++;
    }
    cout << (ans==0? -1 : ans) << '\n';
}
