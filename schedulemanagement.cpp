#include <bits/stdc++.h>
using namespace std;
int t =0;
void solve(){
    int n, m;
    cin >> n >> m;
    int arr[m];
    int worker[n+1] = {};
    for(int i =0; i < m; i++){
        cin >> arr[i];
        worker[arr[i]]++;
    }
    if(n==1){
        cout << m << '\n';
        return;
    }
    int over = 0;
    int newbie = 0;
    for(int i = 1; i <= n; i++){
        if(worker[i]>1) over += worker[i]-1;
        if(arr[i]==0) newbie+=2;
    }
    if(newbie>over) {
        newbie = (newbie/2) - over;
        over = 0;
    }
    else if(over>newbie && newbie !=0){
        over-=newbie;
        newbie = 0;
    }
    else if(newbie==0){
        cout << (over+1) << '\n';
        return;
    }
    cout << max(1, newbie + over) << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while (t--) {
    solve();
    }
}
