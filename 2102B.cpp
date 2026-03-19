#include <bits/stdc++.h>
using namespace std;

int t, n;
const int MAXN = 1e5+5;
long arr[MAXN];

void solve(){
    cin >> n;
    long first = 0;
    for(int i = 0; i < n; i++){
        long x; cin >> x;
        arr[i] = abs(x);
        if(i==0) first = arr[0];
    }
    sort(arr, arr+n);
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << ", ";
    // }
    // for(int i = 0; i < n; i++){
    //     long x; cin >> x;
    //     arr.push_back(pair(abs(x), i));
    // }
    // sort(arr.begin(), arr.end(), [](auto&a, auto&b){
    //     return a.first < b.first;
    // });

    // vector<bool> ans(n, false);
    // for(int i = 0; i<(n/2)+1; i++){
    //     ans[arr[i].second] = 1;
    // }

    // cout << first << ">" << arr[(n/2)+1];

    if(first < arr[(n/2)+1] || n <= 2) std::cout << "YES";
    else std::cout << "NO";
    std::cout << '\n';
}

int main(){
    cin >> t; while(t--) solve();
}