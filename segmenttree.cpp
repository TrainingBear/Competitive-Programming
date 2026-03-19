#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int n, q, x[200005], st[800005];
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
    if(l==r) {
        st[id] = t;
        return;
    }
    int mid = (l+r)/2;
    if(i <= mid){
        update(i, t, id*2, l, mid);
    }else{
        update(i, t, id*2+1, mid+1, r);
    }
    st[id] = min(st[2*id], st[2*id+1]);
}

int query(int a, int b, int id, int l, int r){
    if(a <= l && r <= b){
        return st[id];
    }
    if(b < l || r < a){
        return INT_MAX;
    }
    int mid = (l+r)/2;
    return min(query(a, b, id*2, l, mid), query(a, b, id*2+1, mid+1, r));
}

int main(){
    cin >> n >> q;
    // for(int i = 0; i < n; i++){
    //     cin >> x[i];
    // }
    build(1, 1, n);
    for(int i = 0; i < q; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a==2){
            cout << query(b, c, 1, 1, n) << '\n';
        }
        if(a==1){
            update(b, c, 1, 1, n);
        }
    }
}
