#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string arr; cin >> arr;
    int len = arr.length();
    int o = 0, s = 0, n = 0, p = 0;
    int sumo[len+1];
    int sums[len+1];
    int sumn[len+1];
    int sump[len+1];
    for(int i = 0; i < len; i++){
        if(arr[i]=='P') {
            p++;
        }
        if(arr[i]=='S' && (n>0 || o > 0)){
            s++;
        }
        if(arr[i]=='O') o++;
        if(arr[i]=='N') n++;
    }
    int idx = -1;
    for(int i = 0; i < n; i++){
        if(idx==-1 && (s[i]=='O' || s[i]=='N'))
            idx = i;
        if(idx==-1) continue;
        sumo[i+1] = sumo[i] + (arr[i]=='O');
        sums[i+1] = sums[i] + (arr[i]=='S');
        sumn[i+1] = sumn[i] + (arr[i]=='N');
        sump[i+1] = sump[i] + (arr[i]=='P');
    }
    for(int i = idx; i <= n; i++){
        if(sump[i] && sumo[i])
    }
}
