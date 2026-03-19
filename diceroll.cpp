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
    
    int a, b;
    cin >> a>>b;
    int m = 6-max(a,b)+1;
    if(m%6==0) cout << "1/1";
    else if (m%3==0) cout << 1 << "/" << 6/3;
    else if(m%2==0) cout << m/2 << "/" << 6/2; 
    else cout << m << "/"<< 6;
    return 0;
}

