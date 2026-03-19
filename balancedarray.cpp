#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    if((n/2)%2!=0) {
        cout << "NO" << endl;
        return;
    }
    vector<int> a, b;
    int a_ = 0, b_ = 0;
    for (int i = 1; i <= n/2; i++) {
        a.push_back(i*2);
        a_+=i*2;
    }
    for (int i = 1; i <= n/2; i++) {
        if(i==n/2){
            b.push_back((3*n/2)-1);
        }else{
            b.push_back((i*2-1));
        }
    }
        cout << "YES"<<endl;
        for(int i : a) cout << i << " ";
        for(int i : b) cout << i << " ";
        cout <<endl;
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

