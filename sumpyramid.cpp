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
    int sum = 0;
    for (int i = 1;; i++) {
        sum+=((i*i)+i)/2;
        if(sum==t){
            cout << i;
            break;
        }
        if(sum>t) {
            cout << i-1;
            break;
        }
    }

    return 0;
}

