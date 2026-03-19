#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
}

int main() {
    fast;
    
    int t = 1;
    cin >> t;
    int miska = 0, chris = 0;
    while (t--) {
        int a, b;
        cin >> a>>b;
        if(a>b) miska++;
        else if (b>a) chris++;
    }
    if(miska>chris) cout << "Mishka";
    else if(chris > miska) cout << "Chris";
    else cout << "Friendship is magic!^^";

    return 0;
}

