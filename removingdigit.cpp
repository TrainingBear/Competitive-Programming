#include <bits/stdc++.h>
using namespace std;
long long n;
int main(){
    cin >> n;
    long long cnt = 0;
    while(n){
        long long x = n%10;
        long long n2 = n;
        while(x==0){
            x = n2%10;
            n2/=10;
        }
        n -= x;
        cnt++;
    }
    cout << cnt;
}
