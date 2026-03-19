#include <bits/stdc++.h>
using namespace std;
#define ll long long
int t = 0;
void solve(){
    int n, k; cin >> n >> k;
    vector<ll> arr(n);
    unordered_map<ll, int> cnt;
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
        cnt[arr[i]]++;
    } 
    vector<int> cards;
    for(auto& i : cnt){
        cards.push_back(i.second);
    }
    sort(cards.rbegin(), cards.rend());
    int sum = 0;
    for(int i = 0; i < k; i ++) {
        sum+=cards[i];
    }
    cout << sum << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while(t--) solve();
}
