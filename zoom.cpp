#include <bits/stdc++.h>
using namespace std;
#define ll long long int

long long n, dp[1005], mod = 1e6;

int main(){
    cin >> n;
    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1]+dp[i-2];
        cout << dp[i] << " ";
    }
    cout << '\n';
    cout << dp[n]%mod;
}
