#include <bits/stdc++.h>
#include <utility>
using namespace std;
using ll = long long;
using vector = vector<long long>;
using pair = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
void bismilah(){ ios::sync_with_stdio(false); cin.tie(nullptr); } void yes(){ cout << "YES\n"; } void no(){ cout << "NO\n"; }

void solve(){
    int len;
    string s;
    cin >> len >> s;
    ll a=0, b=0;
    for(char i : s){
        if(i=='-') a++;
        else b++;
    }
    cout << b*(a-1) << '\n'; 
}

int main() {
    bismilah();
    
    int t = 1;
    cin >> t; while (t--) { solve(); }

    return 0;
}

