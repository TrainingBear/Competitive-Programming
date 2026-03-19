#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    int k; cin >> k;
    string s; cin >> s;
    int counter = 0;
    int O=0, I=0;
    for(char i : s){
        if(i=='0') O++;
        else I++;
    }
    //for (int i = 0; i < n/2; i++) {
     //   if(!(s[i]-'0' ^ s[n-i-1]-'0')) counter++;
    //}
    if((abs(O-I) == k*2) || (abs(I-O)==0 && k%2==0)) cout << "YES" << endl;
    else cout << "NO" << endl;
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

