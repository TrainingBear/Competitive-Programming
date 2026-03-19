#include <bits/stdc++.h>
using namespace std;

long long n, x;

void solve(){
    cin >> n >> x;
    long long b = 1;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if(i == 1<<b) b++;
        if((i|x)==x) ans.push_back(i);
        else {
            ans.push_back(x);
            // i = 1 << b;
        }
    }
    bool flag = 0;
    for(int i = 0 ; i < n-1; i++){
        if((ans[i]|ans[n-1])==x){
            flag = 1;
            break;
        }
    }
    if(!flag) ans[n-1] = x;
    for(auto&a:ans) cout << a << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t; while(t--) solve();
}