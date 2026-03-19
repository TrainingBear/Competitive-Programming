#include <bits/stdc++.h>
using namespace std;

int const MAXN = 2e5+5;
long n, a[MAXN];

void solve(){
    cin >> n;
    vector<long> oddv, evenv;
    for(int i = 0; i <n; i++) {
        cin >> a[i];
        if(a[i]&1) {
            oddv.push_back(a[i]);
        }
        else {
            evenv.push_back(a[i]);
        }
    }

    sort(oddv.begin(), oddv.end());
    if(!evenv.empty()) sort(evenv.begin(), evenv.end());
    int r = oddv.size()-1;
    long long alice  = 0, bob = 0;
    for(int i = evenv.empty()? -1 : evenv.size()-1;;){
        if(i < 0 || (r >= 0 && evenv[i] < oddv[r])) {
            r--;
        } else alice+=evenv[i--];
        
        if(r < 0) break;

        if(r < 0 || (i >= 0 && oddv[r] < evenv[i])){
            i--;
        } else {
            bob+=oddv[r--];
        }
    }
    if (bob == alice)
        cout << "Tie\n";
    else if (alice > bob)
        cout << "Alice\n";
    else
        cout << "Bob\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}