#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
ll n, x, y, a[MAXN];

inline void solve(){
    cin >> n >> x >> y;
    ll sum = 0;
    ll mx = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];

        mx = max(mx, a[i]-a[i]/x*y);
        sum += a[i]/x*y;
    }
    cout << sum+mx << '\n';
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
