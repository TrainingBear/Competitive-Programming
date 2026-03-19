#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e+5;;
long n, k, l[MAXN], r[MAXN], rr[MAXN];

inline void solve(){
	cin >> n >> k;
	for(int i = 0 ; i<n; i++){
		cin >> l[i] >> r[i] >> rr[i];
	}
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
