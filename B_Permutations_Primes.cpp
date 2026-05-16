#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;

bool prime(int x){
    if(x < 2) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    for(int i = 3; i*i <= x; i+=2){
        if(x%i==0) return false;
    }
    return true;
}

inline void solve(){
    cin >> n;
    for(int i = 3; i <= n; i++){
        if(i&1) cout << i << " "; 
    }
    cout << 1 << " ";
    for(int i = n; i >= 2; i--){
        if(i&1); else cout << i << " ";
    }
    cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); int t = 1;
	
	cin >> t;

	while(t--){ solve(); }
	return 0;
}
