#include <bits/stdc++.h>
using namespace std;

int t, n;
long long arr[100000+5];

void solve(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(long long x : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 33, 37, 39, 41, 43, 47, 51, 53, 57, 59, 61}){
        for(int i = 1; i <= n; i++){
            if(arr[i]%x) {
                cout << x << '\n';
                return;
            }
        }
    }
}

int main(){
    cin >> t;
    while(t--)
        solve();
}