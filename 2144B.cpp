#include <bits/stdc++.h> 
using namespace std;

int t, n, m = 0;
const int MAXN = 2e5+5;
int arr[MAXN], X[MAXN], B[MAXN];

void solve(){
    cin >> n;
    int ans = 0;
    m = 0;
    int offset = 0;
    int index = 0;
    memset(X, 0, sizeof(X));
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]==0){
            index = i+1;
            m++;
        }
        else if(arr[i]!=i+1) offset++;
        X[arr[i]]++;
    }
    if(n==1) ans = 0;
    else if(m==n) ans = n;
    else if(offset==0) ans = 0;
    else if(m==1){
        int p = 0;
        for(int i = 1; i <= n; i++){
            if(X[i]==0){
                p = i;
                break;
            }
        }
        ans = (p != index? 1 : 0) + offset;
    }
    else ans = m+offset;
    std::cout << ans << '\n';
}

int main(){
    cin >> t; while(t--) solve();
}