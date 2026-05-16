#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
long n, m, a[MAXN], b[MAXN];

inline void solve(){
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    for(int i = 0 ; i < m ; i++) cin >> b[i];

    long mx = *max_element(a, a+n);
    long mn = *min_element(a, a+n);
    for(int i = 0 ; i < m ; i++){
        mx = max(mx, mx^b[i]);
        mn = min(mn, mn^b[i]);
    }

    cout << (mn) << " " << (mx) << '\n';
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
