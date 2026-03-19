#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int winner=0;
    for(int i = 0; i < n-1; i++){
        if(arr[i] == arr[i+1] && 2==n) {
            cout << "YES\n";
            return;
        }
        if(arr[i]==arr[i+1] && arr[i]==0) {
            cout << "YES\n";
            return;
        }
        winner+=arr[i];
    }
    winner += arr[n-1];
    if(winner==n) cout << "YES";
    else cout << "NO";
    cout << '\n';
}
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}
