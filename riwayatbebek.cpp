#include <bits/stdc++.h>
using namespace std;
int t = 0;
void solve(){
    int n; 
    cin >> n;
    long arr[n];
    int mi = INT_MAX, ma = INT_MIN;
    long long sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum+=arr[i];
        mi = min(arr[i], (long)(mi==INT_MAX? mi : ++mi));
        ma = max(arr[i], (long)(ma==INT_MIN? ma : ++ma));
        float nn = (float)i;
        float total = sum + (i==0? 0 : ((float)(nn/2.0)* (2.0 + nn-1)));
        float avg = (float) (total / (nn+1));
        cout << mi << " " << ma << " " << fixed << setprecision(4) << (avg) << '\n';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
