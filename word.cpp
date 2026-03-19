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
        string a, b; cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b<<endl;
    }

    return 0;
}

