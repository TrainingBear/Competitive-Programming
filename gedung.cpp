#include <bits/stdc++.h>
using namespace std;

long long int n, q;
vector<long long> arr;

int main(){
    cin >> n >> q;
    arr.resize(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        long long f = arr[l-1];
        int cnt = 1;
        set<long long> s;
        for(int j = l; j < r; j++){
            if(f<arr[j] && s.count(arr[j]) == 0) cnt++;
            s.insert(arr[j]);
        }
        cout << cnt << '\n';
    }
}
