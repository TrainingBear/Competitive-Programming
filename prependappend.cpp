#include <bits/stdc++.h>
#include <deque>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    deque<char> bin;
    int l; cin >> l;
    string s; cin >> s;
    for(char i : s) bin.push_back(i);
    if(l<=1) {
cout << l << endl;
return;
    }
    while(!bin.empty()){
        if(bin.front() == '0' && bin.back() == '1') {
            bin.pop_front();
            bin.pop_back();
            continue;
        }
        if(bin.back() == '0' && bin.front() == '1') {
            bin.pop_back();
            bin.pop_front();
            continue;
        }
        break;
    }
    cout << bin.size()<< endl;
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

