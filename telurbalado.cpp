#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    ll l = 0, r = n-1;
    while(l<r){
        while(s[l]!='A') l++;
        while(s[r]!='A') r--;
        n-=(r-l);
    }
    cout << n;
}
