#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline void solve(){
	long x, n;
	cin >> x >> n;
	vector<long> a;
	long p;
	set<long> s = {0, x};
	multiset<long> mx = {x};
	for(int i = 0; i < n; i++) {
		cin >> p;
		auto it = s.upper_bound(p);
		long r = *it;
		long l = *prev(it);
		mx.erase(mx.find(r-l));
		mx.insert(r-p);
		mx.insert(p-l);
		s.insert(p);
		cout << *mx.rbegin() << " ";
	}
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	

	while(t--){ solve(); }
	return 0;
}
