#include <bits/stdc++.h>
using namespace std;

int const MAXN = 2e5+5;
long n, a[MAXN];
int cnt[MAXN], seen[MAXN];

void solve(){
	cin >> n;
	memset(cnt, 0, sizeof(cnt));
	memset(seen, 0,  sizeof(seen));
	for(int i = 0 ; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}

	int ans = 0;
	for(int i = 0 ; i < n;i++){
	}
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
