#include <bits/stdc++.h>
using namespace std;
int t, n, q;
string machine;
const int MAXQ = 1e5+5;
// long long arr[MAXQ];

void solve(){
    cin >> n >> q;
    cin >> machine;
    long long b = 0;
    vector<pair<char, long long>> s;
    vector<long long> arr(q);
    // vector<long long> ans(q, 0);
    long long ans = 0;
    char last = machine[0];
    for(int i = 0; i < q; i++){
        cin >> arr[i];
    }

    s.push_back(pair(machine[0], 0));
    for(int i = 0; i < n; i ++){
        if(machine[i]=='B') b++;
        if (last != machine[i]) {
            s.push_back(pair(machine[i], 1));
            last = machine[i];
        }
        else {
            s.back().second += 1;
        }
    }

    if(b==0)
        for (int i = 0; i < q; i++) {
            cout << arr[i] << '\n';
        }
    else for (int i = 0; i < q; i++) {
        ans = 0;
        while (arr[i] > 0){
            for(auto&m : s){
                if(arr[i] <= 0) break;

                if(m.first=='B'){
                    long long d = 0;
                    //  min((long long) floor(log2(arr[i]))+1, m.second);
                    long long x = arr[i];
                    while (x > 0) {
                        x/=2;
                        d++;
                    }
                    d = min(d, m.second);
                    
                    arr[i] >>= d;
                    ans += d;
                } 
                else {
                    long long d = min(m.second, arr[i]);
                    arr[i]-=d;
                    ans += d;
                }
            }
        }
        std::cout << ans << '\n';
    }
}

int main()
{
    cin >> t;
    while (t--)
        solve();
}