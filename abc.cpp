#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
}

int main() {
    fast;
    
    int t = 1;
    cin >> t;
    while (t--) {
        string abc; cin >> abc;
        int c = 0;
        if(abc[0]!='a') c++;
        if(abc[1]!='b') c++;
        if(abc[2]!='c') c++;
        if(c==3) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}

