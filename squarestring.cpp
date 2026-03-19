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
        string s; cin >> s;
        if(s.length()%2!=0) {
            cout << "NO"<<endl;
            continue;
        }else{
            string a = s.substr(0, (s.length()/2));
            string b = s.substr(s.length()/2);
            //cout << a << " | " << b << endl;
            if(a==b) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}

