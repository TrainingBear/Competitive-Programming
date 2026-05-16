#include <bits/stdc++.h>
using namespace std;

int x, ans;
int main(){
    ios::sync_with_stdio(0);
    cin >> x;
    while(x/5){
        ans+=x/5;
        x/=5;
    }
    cout << ans << '\n';
}
