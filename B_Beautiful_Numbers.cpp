#include <bits/stdc++.h>
using namespace std;

signed long long x, cnt[10];

void solve(){
    cin >> x;
    if(x < 10) cout << 0;
    else {
        memset(cnt, 0, sizeof(cnt));
        int ans = 1;
        while(x >= 10){
            cnt[x%10]++;
            x/=10;
            ans++;
        }

        long long t = 0;
        for(int i = 0 ; i < 10; i++){
            if(cnt[i]==0) continue;
            int j = cnt[i];
            bool flag = 0;
            while(t+(i*j) > 9 && j > 0){
                j--;
                flag = 1;
            }
            t+=(j*i);
            if(t < 9) ans-=j;
            if(t > 9 || flag) {
                break;
            }
        }
        ans-=(t+x <= 9);
        // ans+=(t+x > 9 && t+1 > 9);
        cout << ans;
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}