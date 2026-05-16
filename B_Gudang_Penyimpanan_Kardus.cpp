#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, p , l;

inline void solve(){
    cin >> n
     >> p >> l;

    ll z = sqrt(n);
    while(z*z < n) {
        z++;
    }
    cout << z << '\n';
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	while(t--){ solve(); }
	return 0;
}
