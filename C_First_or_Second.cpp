#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5+5;
long a[MAXN], n;
void solve(){
	cin >> n;
	for(int i = 0 ; i < n;i++) cin >> a[i];

	int l = 0, r= 1;
	long long ans = 0;
	for(int i = 0 ; i < n; i++){
		long sumr = 0;
		long mx = -1;
		int cnt = 0;
		while(a[r] < 0 && r < n-1){
			sumr-=a[r];
			if(mx== -1 || a[mx] < a[r]) mx = r;
			r++;
			cout << a[r] << " ";
		}
		while(a[l] > 0){
			sumr+=a[l];
			l++;
			r++;
			cnt++;
		}
		if(cnt>0){
			sumr-=a[--l];
			r--;
		}
		if(a[l] > a[mx] && mx != -1) {
			sumr -= abs(a[mx]);
			sumr+=a[l];
			l = mx;
		} 
		ans+=sumr;
	}
	cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
