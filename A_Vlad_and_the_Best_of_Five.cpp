#include <bits/stdc++.h>
using namespace std;

string s;

void solve(){
    cin >> s;
    int a = 0, b = 0;
    for(int i= 0 ; i < 5; i++){
        if(s[i]=='A') a++;
        else b++;
    }
    if(a >= b) cout << "A\n";
    else cout << "B\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}