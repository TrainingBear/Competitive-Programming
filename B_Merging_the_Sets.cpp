#include <bits/stdc++.h>
using namespace std;

int t, n, m;
const int MAXM = 1e5+5, MAXN = 5e4+5;
int cnt[MAXM];

void solve(){
    cin >> n >> m;
    memset(cnt, 0, sizeof(cnt));
    int ans = 0;
    int size = 0;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        int l; cin >> l;
        vector<int> ls;
        while(l--){
            int x; cin >> x;
            size+=!cnt[x];
            cnt[x]++;
            ls.push_back(x);
        }
        arr[i] = ls;
    }
    ans+=size==m;
    for(vector<int> i : arr){
        int tt = size;
        for(int x : i){
            int y= cnt[x]-1;
            tt -= !y;
        }
        ans += tt == m;
    }

    if(ans >= 3) cout << "YES";
    else cout << "NO";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t; while(t--) solve();
}