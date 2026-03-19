#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    set<int> s;
    long long int sum = 0;
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    long long int avg = sum/n;
    if(sum % n != 0) cout << "TIDAK MUNGKIN\n";
    bool flag = true;
    for(int i = 0; i < n; i ++){
        int diff = (avg-a[i]);
        if(diff>0){
            flag = false;
            auto it = find(a.begin(), a.end(), avg+diff);
            if(it==a.end()){
                cout << "TIDAK MUNGKIN\n";
                return;
            }
            a[i] = avg;
            *it = avg;
            cout << diff << " " <<  (it-a.begin())+1<< " " << (i)+1 << '\n';
        }
    }
    if(flag) cout << "SESUAI\n";
}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
        solve();
}
