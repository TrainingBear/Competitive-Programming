#include <bits/stdc++.h> 
using namespace std;
long long const cap = 1e5+5;
int n, m;

void solve(){
        cin >> n >> m;
        int r[n][101] = {}, c[m][101] = {}, arr[n][m];
        int ma = INT_MIN, mx_cnt = 0; 
        for(int i = 0; i <n;i ++){
            for(int j = 0; j < m; j ++){
                int x; cin >> x;
                r[i][x]++;
                c[j][x]++;
                if(ma < x){
                    mx_cnt = 0; 
                    ma = x;
                }
                if(x==ma) mx_cnt++;
                arr[i][j] = x;
            }
        }
        bool flag = 0;
        for(int i = 0; i <n;i ++)
            for(int j = 0; j < m; j ++){
                if(r[i][ma] + c[j][ma] - (arr[i][j]==ma) == mx_cnt) {
                    flag = 1;
                }
            }
        ma-=flag;
        cout << ma<< '\n';

        // int ansr = 0, ansc = ansr;
        // int rr = INT_MIN, cc = rr;
        // for(int i = 0; i < n;i ++){
        //     if(r[i][ma] > rr){
        //         rr = r[i][ma];
        //         ansr = i;
        //     }
        // }
        // for(int i = 0; i < m;i ++){
        //     if(c[i][ma] > cc){
        //         cc = c[i][ma];
        //         ansc = i;
        //     }
        // }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){ solve();   }
}
