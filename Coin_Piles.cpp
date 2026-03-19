#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a, b;
 
inline void solve(){
    cin >> a >> b;
 
    while(a > 0 && b > 0){
        if(a<b){
            long d = ((b-a+1)/2);
            a-= d;
            b-=2*d;
        } else if(b<a){
            long d = ((a-b+1)/2);
            b-=d;
            a-=2*d;
        } else {
            if((a+b)%3==0){
                a = 0;
                b = 0;
            }
            break;
        }
    }
    if(a==b && a==0) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}
