#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p, k;
    cin >> n >> p >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n ;i++) cin >> a[i];

    priority_queue<int> pq;
    int ans = 0;
    for(int i = 0 ; i < n; i++){
        p-=a[i];
        pq.push(a[i]);

        while(p < 0 && k > 0 && !pq.empty()){
            int prev = pq.top();
            pq.pop();

            p+=prev;
            k--;
        }

        if(p < 0) break;
        ans = i+1;
    }
    cout << ans << '\n';
}