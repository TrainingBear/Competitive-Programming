#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    int l = 0;
    set<int> ns;
    while (n--){
        int bit; cin >> bit;
        if(bit==0) l++;
        else {
            ns.insert(l);
            l = 0;
        }
    }
    ns.insert(l);
    int max = INT_MIN;
    for(int i : ns) if(i > max) max = i;
    cout << max << endl;
}

int main() {
    fast;
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

