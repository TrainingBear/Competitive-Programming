#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int t = 0;
int dfs(vector<int> arr, vector<ll> dagger, int v, bool minus){
    if(arr[v] == 0) return dagger[0];
    return (minus ? dagger[v] - dfs(arr, dagger, arr[v], !minus) : dagger[v] + dfs(arr, dagger, arr[v], !minus));
}
void s(){
    int n; cin >> n;
    vector<ll> dagger(n);
    vector<int> arr(n);
    for(ll i = 0; i < n; i++) cin >> dagger[i];
    for(int i = 0; i < n-1; i++) {
        int v, u; cin >> v >> u;
        arr[v-1] = u-1;
    }
    for(int i = n-1; i >=0; i--) cout << dfs(arr, dagger, i, true) << " ";
    cout << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while(t--)s();
}
