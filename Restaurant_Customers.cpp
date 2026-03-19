#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5;
long n;
pair<long, long> a[MAXN];

inline void solve(){
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i].first >> a[i].second;
	}
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
