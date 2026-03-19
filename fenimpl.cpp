#include <bits/stdc++.h>
using namespace std;

int N, Q, A, B, C, X[200005], c[200005];
long long fen[200005];

long long pref(int x) {
    if (x == 0) {
        return 0;
    }
    return fen[x] + pref(x-c[x]);
}

void edit(int x,int y) {
    if (x <= N) {
        fen[x] += y;
        edit(x+c[x],y);
    }
}

int main() {
    cin >> N >> Q;
    for (int i=1;i<=N;i*=2) {
        for (int j=i;j<=N;j+=i) {
            c[j] = i;
        }
    }
    for (int i=1;i<=N;i++) {
        cin >> X[i];
        edit(i,X[i]);
    }
    for (int i=1;i<=Q;i++) {
        cin >> A >> B >> C;
        if (A == 1) {
            edit(B,C-X[B]);
            X[B] = C;
        }
        if (A == 2) {
            cout << pref(C) - pref(B-1) << "\n";
        }
    }
}
