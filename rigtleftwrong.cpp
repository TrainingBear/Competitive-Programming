#include <bits/stdc++.h>
using namespace std;
int t = 1;
void solve(){
    int n; cin >> n;
    int arr[n];
    long long int pre[n+1] = {};
    pre[0] = 0;
    for(int i = 0; i < n; i ++) {
        cin >> arr[i];
        pre[i+1] = pre[i]+arr[i];
    }
    string s; cin >> s;
    int l = 0, r = n-1;
    long long int sum = 0;
    long long int presum = 0;
    while(r>l){
        while(s[l]=='R') l++;
        while(s[r]=='L') r--;
        if(l > r) break;
        if(s[l]=='L' && s[r] == 'R'){
            sum += pre[r+1] - pre[l];
            l++;--r;
        }
    }
    cout << max(0LL, sum) << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while(t--) solve();
}
