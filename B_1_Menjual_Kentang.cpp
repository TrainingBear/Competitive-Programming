#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+5;
long long n, m, x, sum, b[MAXN];
int main(){
    sum = 0;
    memset(b, 0, sizeof(b));
    cin >> n >> m;
    for(int i = 0; i < n; i++) { cin >> x; sum+=x; }
    for(int i = 1; i <= m; i++) cin >> b[i];
    sort(b+1, b+m+1);
    for(int i = 0;  i< m; i++){ b[i+1] = b[i] + b[i+1]; }
    
    int last = -1;
    for(int i = m; i > 0; i--){
        if(last == (b[i]-b[i-1])) continue;
        if(((double) (b[m]-b[i]+sum)/(double) (n+m-i)) > (double)((double) b[i]/(double) i)){
            cout << b[m]-b[i] << '\n';
            return 0;
        }
        last = (b[i]-b[i-1]);
    }
    cout << -1 << '\n';
}