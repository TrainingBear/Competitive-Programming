#include <bits/stdc++.h>
using namespace std;
int arr[105];

int mex(int l){
    int m[105];
    for(int i = l; i <= l+2; i++){
        m[(arr[i]==-1? 104 : arr[i])]++;
    }
    for(int i = 0; i <= 3; i++){
        if(m[i]==0) return i;
    }
    return 3;
}

void solve(){
    int n; cin >> n;
    for(int i =0; i < n; i++) 
        cin >> arr[i];
    for(int i = 0; i < n-2; i++){
        int m = mex(i);
        int missing = 0;
        missing+= arr[i] == -1;
        missing+= arr[i+1] == -1;
        missing+= arr[i+2] == -1;
        int mx = max({arr[i], arr[i+1], arr[i+2]});
        int mn = min({arr[i], arr[i+1], arr[i+2]});
        if(mx==-1 && mn==-1) continue;
        if(missing==2){
            if(mn==mx)
        }
        if(mn==-1){
            int target = mx-m;
            if(target==m) {
                cout << "NO\n";
                return;
            }
            if(arr[i]==-1) arr[i]=target;
            if(arr[i+1]==-1) arr[i+1]=target;
            if(arr[i+2]==-1) arr[i+2]=target;
            mn = min({arr[i], arr[i+1], arr[i+2]});
        }
        m = mex(i);
        if(m!=mx-mn){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t; while(t--) solve();
}
