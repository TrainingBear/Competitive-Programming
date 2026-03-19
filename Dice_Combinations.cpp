#include <bits/stdc++.h>
using namespace std;
#define ll long long

const long MOD = 1e9+7, MAXN = 2e6+5;
long dp[MAXN];

inline void solve(){
	int n; cin >> n;memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j; j <= 6; j++)
		if(i-j>=0) dp[i]+=dp[i-j];
	}
	cout << dp[n];
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	while(t--){ solve(); }
	return 0;
}
