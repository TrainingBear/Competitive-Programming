#include <bits/stdc++.h>
using namespace std;

int n;
long long b[100005];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    vector<long long> ans;
    ans.push_back(b[0]);
    for(int i = 1; i < n; i++){
        int l = 0, r = ans.size()-1;
        int mark = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(ans[mid] >= b[i]){
                mark = mid;
                r = mid - 1;
            } else l = mid+1;
        }

        if(mark!=-1){
            ans[mark] = b[i];
        } else ans.push_back(b[i]);
        
    }
    cout << ans.size() << '\n';
}