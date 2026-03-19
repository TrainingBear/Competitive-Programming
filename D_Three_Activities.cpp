#include <bits/stdc++.h>
using namespace std;

int t, n;
const int MAXN = 3e5+5;
pair<long, int> cnt[MAXN];
long fren[3][MAXN];

array<long, 3> great(int f){
    long mx1 = -1, mx2 = -1, mx3 = -1;
    for(int i = 0; i < n; i++){
        if(mx1==-1 || fren[f][i] > fren[f][mx1]){
            mx3 = mx2;
            mx2 = mx1;
            mx1 = i; 
        }
        else if(mx2==-1 || fren[f][i] > fren[f][mx2]){
            mx3 = mx2;
            mx2 = i;
        }
        else if(mx3==-1 || fren[f][i] > fren[f][mx3]){
            mx3 = i;
        } 
    }
    return {mx1, mx2, mx3};
}

void solve(){
    cin >> n;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < n; j++)
            cin >> fren[i][j];
        sort(fren[i], fren[i] + n);
    }

    long ans = 0;
    for(auto&x:great(0)){
        for(auto&y:great(1)){
            for(auto&z:great(2)){
                if(x!=y && y!=z && x!=z){
                    ans = max(ans, fren[0][x] + fren[1][y] + fren[2][z]);
                }
            }
        }
    }

    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> t; while(t--){
        solve();
    }
}