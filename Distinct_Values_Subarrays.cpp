#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline void solve(){
	int n;
	cin >> n;
	set<long> s;
	int dup = 0;
	for(int i = 0; i < n; i++) {
		long x;
		cin >> x;
		dup+=s.count(x)!=0;
		s.insert(x);
	}
	cout << (s.size()*s.size()) - dup;
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	while(t--){ solve(); }
	return 0;
}
