#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#define ll long long

int TIGA(int N) {
    if (N <= 1) {
        return 1;
    } else if (N % 3 == 0) {
        return TIGA(N - 1) + TIGA(N - 3);
    } else if (N % 3 == 1) {
        return TIGA(N - 2);
    } else {
        return TIGA(N - 3);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    ll z = TIGA(n);
    cout << z;
}
