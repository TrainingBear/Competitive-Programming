#include <bits/stdc++.h>
using namespace std;
static int n, cnt[30];
static string s;
int main(){
    cin >> n;
    cin >> s;
    for(int i = 0 ; i < n ; i++){
        cnt[s[i]-'A']++;
    }
    sort(cnt, cnt+30, greater<int>());
    int ans = 0;
    ans = (cnt[2]*3) + (cnt[1]>cnt[2]? 2 : 1);
    if(cnt[1] == 0 || cnt[2] == 0)
            cout << -1 << '\n';
    else cout << ans << '\n';
}