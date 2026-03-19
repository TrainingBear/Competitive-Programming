#include <bits/stdc++.h>
using namespace std;

int n, kel[100005];
vector<int> arr[100005];

void gabung(int x, int y){
    if(kel[x]!=0){
        if(kel[x]!=y){
            cout << "IMPOSSIBLE";
            exit(0);
        }
        return;
    }
    kel[x] = y;
    for(int i : arr[x]){
        if(y==1) 
            gabung(i, 2);
         else 
             gabung(i, 1);
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m; 
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for(int i = 1; i <= n; i++){ 
        if(kel[i]==0) gabung(i, 1);
    }
    for(int i = 1; i <= n; i++){
        cout << kel[i] << " ";
    }
}
