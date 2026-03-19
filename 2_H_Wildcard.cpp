#include <bits/stdc++.h>
using namespace std;

int n, l, r;
string wild, q[100];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> wild >> n;
    for(int i = 0; i < n; i++){
        cin >> q[i];
        l = 0;
        r = 0;
        bool flag = wild.size() > q[i].size();
        while(l < q[i].size() && r < wild.size()){
            if(wild[r] != q[i][l] && wild[r] != '*') {
                flag = 1;
                break;
            }
            r++; l++;
        }
        if(!flag) cout << q[i] << '\n';
    }
}