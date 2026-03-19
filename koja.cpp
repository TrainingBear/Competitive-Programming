#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> arr;
ll solve(int i, int a, int b){
    if(i>=arr.size()){
        return abs(a-b);
    }
    int aa = solve(i+1, a+arr[i], b);
    int bb = solve(i+1, a, b+arr[i]);
    return min(aa, bb);
}
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        ll x; cin >> x;
        arr.push_back(x);
    }
    cout << solve(0, 0, 0);
}
