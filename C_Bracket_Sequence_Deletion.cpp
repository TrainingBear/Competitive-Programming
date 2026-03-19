#include <bits/stdc++.h>
using namespace std;

int const MAXN = 5e5+5;
int n;
//  buka[MAXN], tutup[MAXN];
string s;

void solve(){
    cin >> n >> s;
/*     int removed=0;
    int buka = 0;
    int tutup = 0;
    int cnt =0;
    for(int i = 0 ; i < n; i++){
        buka+=s[i]=='(';
        tutup+=s[i]==')';

        if(s[i]==')'){
/*             tutup++;
            if(buka > 0) buka--;
            if (buka >= 0) cnt++; 
        }
    }
    int seenBuka = 0;
    int seenTutup = 0;
    int ans = 0;
    for(int i = 0 ; i < n; i++){
        seenTutup+=s[i]==')';
        seenBuka+=s[i]=='(';
        if(s[i]==')' && seenBuka > 0){
            seenBuka--;
            seenTutup--;
        } 
    }

    cout << cnt << " ";
    cout << (seenBuka == 1) + (seenTutup == 1) << '\n' */;

    int i = 0, r = n-1;
    int cnt = 1;
    for(; i < r;i++,r--){
        while(s[i]==s[r] && r > i) {
            r--;
        }
        cnt++;
    };
    cout << cnt << " " << i << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t; while(t--) solve();
}