#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t; while(t--){
        int m; cin >> m;
        set<int> p, w;
        for(int i = 0; i < m; i++){
            int n;
            cin >> n;
            set<int> a;
            for(int j = 0; j < n; j++){
                int temp; 
                cin >> temp;
                a.insert(temp);
                p.insert(temp);
            }

            for(int par : p){
                if(a.count(par) == 0){
                    w.insert(par);
                }
            }
            set<int> w2 = w;
            for(int win : w){
                if(a.count(win) >= 1){
                    w2.erase(win);
                }
            }
            w = w2;
        }
        if(!w.empty()) for(int i : w) cout << i << " ";
        else cout << -1;
        cout << '\n';
    }
}
