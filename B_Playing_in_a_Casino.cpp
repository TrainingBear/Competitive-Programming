#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline void solve(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0 ;i < n ; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    ll cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = 0; k < m; k++){
                cnt += abs(a[i][k] - a[j][k]);
            }
        }
    }
    cout << cnt << '\n';
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
