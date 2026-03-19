#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 5e3+5;

int n, m, k, p;

inline void solve(){
	cin >> n >> k >> p >> m;
	p--;
	k--;
	vector<int> a;
	for(int i = 1; i <= n; i++) {
		int x; cin >> x;
		a.emplace_back(x);
	}
	int ans = 0;
	int win = a[p];
	while(m > 0){
		if(k >= p && win <= m){
			m-=win;
			ans++;
			a.erase(a.begin()+p);
			a.push_back(win);
			p = n-1;
			continue;
		}
		else {
			int mn = -1;
			for (int i = 0; i <= k; i++) {
				if (mn == -1 || a[mn] > a[i])
					mn = i;
			}
			if (a[mn] <= m) {
				m -= a[mn];
				a.push_back(a[mn]);
				a.erase(a.begin() + mn);
				p--;
			}
			else break;
		}
	}
	cout << ans << '\n';
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int t = 1;

	cin >> t;

	while (t--)
	{
		solve();
	}
	return 0;
}
