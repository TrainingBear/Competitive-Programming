#include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;
using v = vector<long long>;
using p = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
void bismilah(){ ios::sync_with_stdio(false); cin.tie(nullptr); } 

void solve(){
    int n; cin >> n;
    int a[n], b[n];
    int min = INT_MAX;
    set<int> min;
    for (int i = 0; i < n; i++){ 
        int t; cin >> t;
        a[i] = t; 
        min.insert(t)
    }
    for (int i = 0; i < n; i++) { cin >> b[i]; }
    int dec = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] < b[i]){
            if((min<=0)){
                cout << " NO because min = " << min;
                return;
            }if((a[i]-dec--)-b[i] > min--){
                cout << "NO\n cause " << (a[i]-dec--)-b[i] << " > "<< ++min << "\n ";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main() {
    bismilah();
    
    int t = 1;
    cin >> t; while (t--) { solve(); }

    return 0;
}

