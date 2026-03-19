#include <bits/stdc++.h>
using namespace std;

int n;
string s;
void solve(){
    cin >> n >> s;
    vector<int> ans;
    int ptr = 0;
    vector<int> temp;
    int last = -1;
    for(int i = 0 ; i < n && ptr < n;){
        if(s[i]=='1'){
            if(s[ptr]=='0'){
                i = ptr;
                last = ptr;
                for(auto&a : temp) ans.push_back(a);
                temp.clear();
            } else temp.push_back(ptr);
            ptr++;
        }else{
        i++;
        ptr++;
        }
    }
    if(last!=-1) ans.push_back(last);
    if(ans.size()==0) cout << "Bob\n";
    else {
        cout << "Alice\n";
        cout << ans.size() << '\n';
        for(auto&a: ans) cout << a + 1 << " ";
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t; while(t--) solve();
}