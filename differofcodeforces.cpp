#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

string ori = "codeforces";

void solve(){
    string s; cin >> s;
    int diff = 0;
    for (int i = 0; i < ori.length(); i++) 
        if(s[i]!=ori[i]) diff++;
    
    cout << diff << endl;
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

