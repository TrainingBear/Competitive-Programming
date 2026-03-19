#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long long cap = 1e7+5;

long long n, k, x, a, b, c, X[cap], sum, ans;
deque<ll> st;

int main(){
    cin >> n >> k;
    cin >> X[1] >> a >> b >> c;
    for(ll i = 2; i <= n; i++){
        X[i] = (a*X[i-1]+b) % c;
    }
    for(ll i = 1; i <= k; i++){
        // while(!st.empty() && X[st.back()] >= X[i])
        //     st.pop_back();
        //
        // st.push_back(i);
        // while(st.front() <= i-k) 
        //     st.pop_front();
        //
        // if(i >= k) 
        //     ans ^= X[st.front()];
        sum = sum || X[i];
    }
    ans = sum;
    for(ll i = k+1; i <=n; i++){
        sum = sum || X[i];
        sum &= X[i-k];
        ans = ans || sum;
    }
    cout << ans << '\n';
}
