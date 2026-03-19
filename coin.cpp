#include <bits/stdc++.h>
using namespace std;
long long n, t, dp[2000005];
const long long mod = 1e9+7;

int main(){
    cin >> n >> t; 
    vector<long long> arr(n+1);
    for(int i = 0; i < n; i++) cin >> arr[i+1]; 
    dp[0] = 1;
    sort(arr.begin(), arr.end());
    for(long long i = 1; i <= t; i++){ 
        for(int j = 1; j <= n; j++){ 
            if(i >= arr[j]) 
                dp[i] = (dp[i] + dp[i-arr[j]]) %mod;
        }
    }
    cout << dp[t];
}
