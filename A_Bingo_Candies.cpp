#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 105;
int n;

inline void solve(){
	cin >> n;
	int counter = 0;
	unordered_map<int, int> cnt;
	for(int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			int x; cin >> x;
			cnt[x]++;
		}
	int nq = n*n;
	int cntr = 0;
	for(auto [a,b]:cnt){
		if(b > n*(n-1)) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
