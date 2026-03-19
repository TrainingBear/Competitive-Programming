#include <bits/stdc++.h>
using namespace std;

int n, m, r[105], b[105], a[205], pref[205];

void solve(){
	cin >> n;
	for(int i = 0; i < n; i++) cin>> r[i];
	cin >> m;
	for(int i = 0; i < m; i++) cin>> b[i];

	int ptr = 0;
	int l = 0;

	for(int i = 0; i < n+m; i++){
		if (ptr >= m || (l < n && r[l] > b[ptr])) {
			a[i] = r[l++];
		}
		else
			a[i] = b[ptr++];
	}

	for(int i = 0; i < n+m; i++) cout << a[i] << " ";
	cout << '\n';
	memset(pref, 0, sizeof(pref));
	for(int i = 0; i < n+m; i++){
		pref[i+1] = pref[i] + a[i];
	}

	int ans = 0;
	for(int i = 1; i <= n+m; i++){
		ans = max(ans, pref[i]-pref[0]);
	}

	cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
