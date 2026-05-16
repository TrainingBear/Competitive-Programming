#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;

inline void solve(){
    cin >> n;
    ll z = 1;
    for(int i = 2; i*i <=n; i++){
        if(n%i==0){
            z = n/i;
            break;
        }
    }

    cout << z << " " << n-z << '\n';
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
