#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    string team; cin >> team;
    int bal = 0;
    int mem[26] = {0};
    for(char i : team){
        if(mem[i-'A']==0) {
            mem[i-'A']+=2;
            bal+=2;
        }
        else {
            mem[i-'A']+=1;
            bal++;
        }
    }
    cout << bal << endl;;
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

