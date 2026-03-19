#include <bits/stdc++.h>
using namespace std;
#define ll long long

int t, n; 
const int MAXN = 2e5+5;
ll arr[MAXN];
ll tree[MAXN];

void add(int i, ll val){
    for(;i <= n; i += i&-i){
        tree[i]+=val;
    }
}

ll query(int i){
    ll sum = 0;
    while(i){
        sum += tree[i];
        i -= i&-i;
    }
    return sum;
}

ll range(int l, int r){
    return query(r) - query(l-1);
}

void build() {
    memset(tree, 0, sizeof(tree));
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        tree[i]+=arr[i];
        int j = i + (i & -i);
        if(j<=n){
            tree[j] += tree[i];
        }
    }
}

void solve(){
    // build();
    cin >> n;
    memset(arr, 0, sizeof(arr));
    for(int i = 0; i < n;i++) cin >> arr[i];
    ll ans = 0;
    for(int i = 0; i < (n-1); i++){
        ll even = 0, odd = 0;
        ll k = 1;
        for(int j = i; j < i+3; j++){
            if((j+1)&1) odd+=arr[j];
            else even+=arr[j];
            ll delta = odd - even;
            if (k>=2 && delta > 0) {
                ans += delta;
                arr[(j-(j&1))] -= delta;
                odd -= delta;
            }
            k++;
        }
        // cout << even << " " << odd << ", ";
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> t; while(t--) solve();
}