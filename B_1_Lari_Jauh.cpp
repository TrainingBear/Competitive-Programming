#include <bits/stdc++.h>
using namespace std;

static int const MAXN = 1e5+5;
static int n, k, a[MAXN];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[i+1] = x+a[i];
    }

    for(int i = 0; i < k; i++){
        int b; 
        cin >> b;
        int l = 0, r= n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid+1] <= b){
                l = mid+1;
            } else {
                r = mid -1;
            }
        }
        cout << l << '\n';
    }
}