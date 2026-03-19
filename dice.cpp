#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n;

ll mod = 1e9+7;
ll dp[1000005];
ll dice(int n){
    if(dp[n]!=0) return dp[n];
    dp[n] = dice(n);
    return dp[n];
}


int main(){
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 8;
    dp[5] = 16;
    dp[6] = 32;
    cout << dice(n) % mod;
}
