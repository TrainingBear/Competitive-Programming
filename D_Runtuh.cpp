#include <bits/stdc++.h>
using namespace std;

int r, c;
string s[20];
int state[20];

void solve(){
    cin >> r >> c;
    for(int i = 0 ; i < r; i++){
        cin >> s[i];
    }
    unordered_set<int> cleared;
    int bottom = 0;
    int top = r-1;
    int coor[r];
    for(int i = 0; i < r; i++){
        bool flag = 0;
        for(int j = 0; j < c; j++){
            if(s[i][j]!='1'){
                flag = 1;
                break;
            } 
        }
        if(!flag) {
            cleared.insert(i);
            bottom = i;
        }
    }
    for(int k = bottom+1; k >= 0; k--){
    for(int i = 0; i < c; i++){
        if (s[k][i]=='1') {
            for (int j = k; j < r; j++) {
                if(cleared.count(j)) continue;
                if(s[k][j]=='0') {
                    swap(s[k][j], s[k][i]);
                } else continue
            }
        }
    }
}
    for(int i = r; i >= 0; i--){
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}