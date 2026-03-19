#include <bits/stdc++.h>
using namespace std;

long long n, q, a, b, x[1000006], st[4000024];
void build(int id, int l, int r){
    if(l==r) {
        cin >> st[id];
        return;
    }
    int mid = (l+r)/2;
    build(id*2, l, mid);
    build(id*2+1, mid+1, r);
    st[id] = min(st[id*2], st[id*2+1]);
}

void update(int i, int t, int id, int l, int r){
    if(l==r){
        st[id] = t;
        return;
    }
    int mid = (l+r)/2;
    if(i <= mid){
        update(i, t, 2*id, l, mid);
    }else update(i, t, 2*id+1, mid+1, r);
}

int pref(int a, int b, int id, int l, int r){
    if(a <= l && r <= b){
        return st[id];
    }
    if(b < l || r < a) {
        return INT_MAX;
    }
    int mid = (l+r)/2;
    return min(pref(a, b, 2*id, l, mid), pref(a, b, 2*id+1, mid+1, r));
}

int main(){
    cin >> n >> q;
    build(1, 1, n);
    int state; cin >> state;
    for(int i = 0; i < q; i++){
        if(state==2) {
            cout << pref(a, b, 1, 1, n) << '\n';
        }
        else {
            update(a, b, 1, 1, n);
        }
    }
}

