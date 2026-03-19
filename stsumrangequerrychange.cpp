#include <bits/stdc++.h>
using namespace std;

const long long cap = 2e5+5;
int n, q, a, b, c;
long long x[cap], st[cap*4];

void build(int id, int l ,int r){
    if(l==r) {
        cin >> st[id];
        return;
    }
    int mid = (l+r)/2;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id] = st[id*2] + st[id*2+1];
}

long long query(int a, int b, int id, int l, int r){
    if(a <= l && b >= r){
        return st[id];
    }
    if(b < l || a > r) return 0;
    int mid = (l+r)/2;
    return query(a, b, 2*id, l, mid) + query(a, b, 2*id+1, mid+1, r);
}

int main(){
    cin >> n >> q; 
    build(1, 1, n);
    for(int i = 0; i < q; i++){
        cin >> a >> b >> c;
        if(a==2){
            query(a, b, 1, 1, n);
        }
    }
}
