#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    int p, l; cin >> p >> l;
    ll volume = (p*l)*n;
    ll ans = sqrt(volume);
    ll temp = ans-1;
    for(int i = temp;; i++){
        if(i*i >= volume){ 
            ans = i;
            break;
        }
    }
    ll r1 = ans, r2 = ans;
    if(ans/l < 0) r1 += l;
    if(ans/p < 0) r2 += p;
    cout << max(r1, r1);
}
