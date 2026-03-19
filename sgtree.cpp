#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    long long odd;
    long long even;
    
    Node(int odd, int even){
        this->odd = odd; 
        this->even = even;
    }

    Node() : Node(0, 0){
    }
};

Node st[4 * 2 * 100005];

Node merge(Node a, Node b){
        return Node( a.odd + b.odd,
                    a.even + b.even);
}

void build(int id, int l , int r){
        if(l==r){
            int x; 
            cin >> x;
            if((x+1)%2){
                st[id] = Node(x, 0);
            } else {
                st[id] = Node(0, x);
            }
            return;
        }
        int mid = (l+r)/2;
        build(id*2, l, mid);
        build(id*2+1, mid+1, r);
        st[id] = merge(st[id*2], st[id*2+1]);
}

static Node query(int id, int l, int r, int ql, int qr){
        if(qr < l || qr > r)
        if(ql <= l && r <= qr) return st[id];
        int mid = (l+r)/2;
        Node left = query(id*2, l, mid, ql, qr);
        Node right = query(id*2+1, mid+1, r, ql, qr);
        return merge(left, right);
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    build(1, 0, 10);

    Node n = query(1, 0, 10, 0, 1);
    cout << st[1].odd << '\n';
    cout << st[1].even << '\n';
    cout << n.odd << '\n';
    cout << n.even << '\n';

    return 0;
}
