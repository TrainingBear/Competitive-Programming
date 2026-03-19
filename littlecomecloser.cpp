#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int t= 0;
void s(){
    int n; cin >> n;
    vector<pair<int64_t, int64_t>> m(n);
    multiset<ll> x, y;
    for(int i = 0; i < n; i++) {
        cin >> m[i].first >> m[i].second;
        x.insert(m[i].first);
        y.insert(m[i].second);
    }
    if(n==1) {
        cout << 1 << '\n';
        return;
    }
    long long p = (*x.rbegin()-*x.begin())+1;
    long long l = (*y.rbegin()-*y.begin())+1;
    ll size = p*l;
    for(ll i = 0; i < n; i++){
        x.erase(x.find(m[i].first));
        y.erase(y.find(m[i].second));
        ll pa = (*x.rbegin()-*x.begin())+1;
        ll le = (*y.rbegin()-*y.begin())+1;
        ll temp = pa * le;
        x.insert(m[i].first);
        y.insert(m[i].second);
        if(temp < size){
            size = temp;
            p=pa;
            l=le;
        }
    }
    if(size < n){
        size = p < l? (l+1) * p : (p+1) * l;
        cout << size;
    } else cout << size;
    cout << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >>t ;
    while(t--)s();
}   
