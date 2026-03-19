#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;

void binary(int i) {
    if (i == 0) {
        for(int j = 0; j < n; j++) cout << 0;
        cout << '\n';
        return;
    }

    if(n==1) cout << bitset<1>(i);
    if(n==2) cout << bitset<2>(i);
    if(n==3) cout << bitset<3>(i);
    if(n==4) cout << bitset<4>(i);
    if(n==5) cout << bitset<5>(i);
    if(n==6) cout << bitset<6>(i);
    if(n==7) cout << bitset<7>(i);
    if(n==8) cout << bitset<8>(i);
    if(n==9) cout << bitset<9>(i);
    if(n==10) cout << bitset<10>(i);
    if(n==11) cout << bitset<11>(i);
    if(n==12) cout << bitset<12>(i);
    if(n==13) cout << bitset<13>(i);
    if(n==14) cout << bitset<14>(i);
    if(n==15) cout << bitset<15>(i);
    if(n==16) cout << bitset<16>(i);
    cout << '\n';
}

inline void solve(){
    cin >> n;
    binary(0);
    for(int i = 1; i < (1<<n); i++){
        int g = i ^ (i >> 1);
        cout << bitset<16>(g).to_string().substr(16 - n) << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}