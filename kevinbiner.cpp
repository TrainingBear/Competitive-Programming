#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int z = -1;
    int c = 0;
    cout << 1 << " " << s.length() << " ";
    bool flag = true;
    for(long long int i = 0; i < s.length(); i++){
        if(s[i]=='0' && z == -1) {
            z = i;
            c++;
            continue;
        }
        if(s[i] == '0' && z != -1) c++;
        if(s[i] == '1' && z != -1){
            int l = max(0, z-c);
            int r = s.length()-(z-l);
            cout << l+1 << " "<< r << '\n';
            return;
        }
    }
    if(z==-1){
        cout << s.length() << " " << s.length() << '\n';
        return;
    }
            int l = max(0, z-c);
            int r = s.length()-(z-l);
            cout << l+1 << " "<< r << '\n';
            return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
}
