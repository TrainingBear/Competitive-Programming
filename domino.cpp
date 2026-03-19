#include <bits/stdc++.h>
using namespace std;

long long arr[200005];
int t; 
void solve(){
    int n ; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 1; i < n; i++){
        if(arr[arr[i]]==0) {
            cout << -1 << '\n';
            return;
        }
        if(arr[i-1]*2 <= arr[arr[i]]) cnt++;
    }
    cout << (cnt==0? -1 : cnt) << '\n';
}
int main(){
    cin >> t;
    while(t--) solve();
}
