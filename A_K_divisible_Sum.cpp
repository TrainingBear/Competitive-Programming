#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, k;

inline void solve(){
    cin >> n >> k;
    ll ans = -1;
    if(n>k) k *= n/k + (n%k!=0);
    
    ans = (k/n)+(k%n!=0);
    cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
