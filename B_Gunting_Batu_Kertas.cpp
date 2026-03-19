#include <bits/stdc++.h>
using namespace std;

int n, cnt1[3], cnt2[3];
string s1, s2;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    cin >> s1 >> s2;
    int ans = 0;
    memset(cnt1, 0, sizeof(cnt1));
    memset(cnt2, 0, sizeof(cnt2));
    for(int i = 0 ; i < n ;i++){
        if(s1[i]=='G') cnt1[0]++;
        if(s1[i]=='B') cnt1[1]++;
        if(s1[i]=='K') cnt1[2]++;
        
        if(s2[i]=='G') cnt2[0]++;
        if(s2[i]=='B') cnt2[1]++;
        if(s2[i]=='K') cnt2[2]++;
    }
    ans = min(cnt1[0], cnt2[2]) + min(cnt1[1], cnt2[0]) + min(cnt1[2], cnt2[1]);
    cout << ans << '\n';
}