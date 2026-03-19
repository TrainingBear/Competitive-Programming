#include <bits/stdc++.h>
using namespace std;

long long f[200005];

int fib(int n){
    if(f[n]!=0) return f[n];
    if(n==1) return 1;
    if(n==2) return 2;
    f[n] = fib(n-1) + fib(n-2);
    return f[n];
}

void solve(){
    int n, m; cin >> n >> m;
    set<int> cube;
    string status = "";
    int a = fib(n);
    int t = a + fib(n-1);
    int dim[m][3];
    for(int i = 0; i < m; i++){
        cin >> dim[i][0] >> dim[i][1] >> dim[i][2];
        sort(dim[i], dim[i]+3);
    }
    for(int i = 0; i < m; i++){
        status+=(dim[i][0] >= a && dim[i][1] >= a && dim[i][2] >= t? "1" : "0");
    }
    cout << status << '\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    f[1] = 1;
    f[2] = 2;
    int t; cin >> t;
    while(t--) solve();
}
