#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    string n; cin >> n;
    int min = 0;
    int zero = false;
    for (int i = n.length()-1; i > 0 ;i--) {
        if(zero) {
            if(n[i]-'0'!=0) min++;
        }
        else if(i>0 && n[i]-'0' != 0 && n[i-1]-'0' == 0){
            zero = true;
            min++;
        } 
        else min ++;
    }
    cout << min << endl;
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

