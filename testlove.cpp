#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,s,e) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
void solvea(){
    int n, m, k; cin >> n >> m >>k;
    string seg; cin >> seg;
    int cur = -1;
    int cold = 0;
                for(int j = m; j >= 1; j--){
                    cout << seg[cur+j];
                }
                cout << '\n';
}
void solve(){
    int n, m, k; 
    cin >> n >> m >> k;
    string seg;
    cin >> seg;
    int cur = -1;
    int cold = 0;
    while(cur < n){
            bool log = false;
            int water = -1;
            if(cur==-1 || seg[cur]=='L'){
                for(int j = m; j >= 1; j--){
                    if(cur+j >= n) {
                        cout << "YES\n";
                        return;
                    }
                    if(seg[cur+j]=='L'){
                        cur+=j;
                        log = true;
                        break;
                    }
                    if(seg[cur+j] != 'C' && seg[cur+j] == 'W' && water == -1){ 
                        water = j;
                    }
                }
            }
            else if(seg[cur]=='W'){
                if(cold >= k){
                    cout << "NO\n";
                    return;
                }
                bool flag = false;
                for(int i = 1; i <= k-cold; i++){
                    if(cold+i > k) {
                        flag = true;
                        break;
                    }
                    if(cur+i >= n) {
                        cout << "YES\n";
                        return;
                    }
                    if(seg[cur+i]=='C'){
                        cout << "NO\n";
                        return;
                    }
                    if(seg[cur+i]=='L') {
                        cur+=i;
                        cold+=i;
                        log = true;
                        break;
                    }
                }
                if(flag) {
                    cout << "NO\n";
                    return;
                }
            }
            if(water != -1 && !log)
                cur+=water;
            else if(water == -1 && !log){
                cout << "NO\n";
                return;
            }
    }
    cout << "YES\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

