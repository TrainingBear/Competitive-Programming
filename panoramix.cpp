#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
}

bool check(int n, int m){
    return (n== 2 && m==3) || (n==3 && m==5) || (n==5 && m==7);
}

int main() {
    fast;
    
    int n, m; cin >> n >> m;
    if(check(n,m)) {
        cout << "YES";
        return 0;
    }
    int next = n+1;
    if(check(n,next) && next!=m) {
        cout << "NO";
        return 0;
    }
    while(next%7==0 || next%5==0 || next%2==0 || next%3 == 0) {
        if(next==7 || next==5 || next==2 || next == 3) break;
        next++;
    }
    if(next==m) cout << "YES";
    else cout << "NO";
    return 0;
}

