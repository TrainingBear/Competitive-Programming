#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int len = s.length();
        for(int i = 0; i < len-2;i ++){
            string diff = s.substr(i,3);
            if(diff=="FFT")
                swap(s[i+1],s[i+2]);
            if(diff == "NTT")
                swap(s[i], s[i+1]);
        }
        cout << s << '\n';
    }
}

