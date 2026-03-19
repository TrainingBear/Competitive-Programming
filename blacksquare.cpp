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
    
    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    int cal = 0;
    string s; cin >> s;
    stack<int> index;
    for(char i : s)
        index.push(i-'0');
    while(!index.empty()){
        cal+=a[index.top()-1];
        index.pop();
    }
    cout << cal;
    return 0;
}

