#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e3+5;
long n, h, a[MAXN];

void solve(){
    cin >> n >> h;
    vector<pair<long, int>> height(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        // height[i] = {a[i], i};
    }
    // sort(height.begin(), height.end(), [](auto&a, auto&b){return a.first < b.first;});

    vector<pair<long, int>> volume(n);
    for(int i = 0; i < n; i++){
        int idx = i;
        long lower = 1;
        volume[i] = {0, i};
        for(int j = idx; j < n; j++){
            if(a[j]==h) break;
            lower = max(a[j], lower);
            volume[idx].first += h-lower;
        }
        lower = 1;
        for(int j = idx-1; j >= 0; j--){
            if(a[j]==h) break;
            lower = max(a[j], lower);
            volume[idx].first += h-lower;
        }
    }

    sort(volume.begin(), volume.end(), [](auto&a, auto&b){return a.first > b.first;});
    long long ans = volume[0].first;
    if(n>1){
        int idx = -1;
        for(int i = 0; i < n; i++){
            long cur = volume[0].first - volume[i].first;
            if(idx==-1 || (volume[0].first - volume[idx].first < cur && cur != 0)) idx = i;
        }
        int ptr = idx;
        bool same = 0;
        while(a[ptr]!=h && ptr < n){
            if(ptr==volume[0].second) {
                same = 1;
            }
            ptr++;
        }
        int l = idx-1;
        while(a[l]!=h && l >= 0){
            if(l==volume[0].second) {
                same = 1;
            }
            l--;
        }

        if(same){
            ans+=volume[1].first-(ptr-l);
        } else ans+=volume[1].first;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}