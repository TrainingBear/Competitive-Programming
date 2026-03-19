#include <bits/stdc++.h>
using namespace std;

long long n, m, k, sum, a[100005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> n >> m >> k;
    sum = m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    long long ans = 0;
    int ptr = 0;
    for(int i = 0; i < n; i++){
        sum+=k;
        while(sum >= a[ptr] && ptr < n){
            ptr++;
        }
        if(sum < a[ptr]) {
            ans++;
            sum = max(sum, a[ptr]);
        }
    }
    cout << ans << '\n';
}