#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
int n;
// , a[MAXN], b[MAXN];
pair<int, int> a[MAXN];

inline void solve(){
	cin >> n;
	double ans = 0;
	for(int i = 0 ; i < n ; i++) cin >> a[i].first >> a[i].second;
	sort(a, a+n, [](auto&a, auto&b){return a.first > b.first;});

	int i = 0;
	double s = 1.0;
	while(i < n && s > 0){
		ans+= (a[i].first*s);
		s*=(1.0-(a[i].second/100.0));
		i++;
	}
	cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
