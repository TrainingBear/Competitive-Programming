#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int n, m, x[200005], st[800005];

void build(int id, int l, int r){
    if(l==r) {
        cin >> st[id];
        return;
    }
    int mid = (l+r)/2;
    update(id*2, l, mid);
    update(id*2+1, mid+1, r);
    st[id] = max();
}

int main(){ 
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

}
