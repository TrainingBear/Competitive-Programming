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
        string sub = "";
        for(int i = 0; i < s.length(); i+=2){
            sub += s[i];
        }
        sub += s[s.length()-1];
        cout << sub << endl;
    }

    return 0;
}

