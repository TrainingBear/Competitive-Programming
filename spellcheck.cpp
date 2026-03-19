#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()


void solve(){
    vector<char> ori = {'T','i','m','u','r'};
    int length; cin >> length;
    string name; cin >> name;
    if(length!=5){
        cout << "NO"<<endl;
        return;
    }
    for(char i : name){
        auto it = find(all(ori), i);
        if(it!=ori.end()){
            ori.erase(it);
            continue;
        } 
        else {
            cout << "NO"<<endl;
            return;
        }
        
    }
    cout << "YES"<<endl;
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

