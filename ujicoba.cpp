#include <bits/stdc++.h>
using namespace std;
long long n, m;
const long long cap = 2e9; 
int main(){
    cin >> n;
    string ss; 
    cin >> ss;
    long OO[n+1] = {};
    long SS[n+1] = {};
    long NN[n+1] = {};
    bool f1 = 0, f2= 0;
    for(long long int i = 0; i < n; i++){
        if(ss[i]=='O') {
            OO[i+1] = OO[i] + 1;
            f1= 1;
        }
        if(ss[i]=='S' && f1) {
            SS[i+1] = SS[i] + 1;
            f1=0;
            f2=1;
        }
        if(ss[i]=='N'&&f2) {
            NN[i+1] = NN[i] + 1;
            f2=0;
        }
    }
    long long ans = 0; 
    // ans = (OO[i] - OO[0]) * ((SS[n] - SS[i-1])-(NN[n]-NN[i])) * ((NN[n]-NN[i+1]));
    ans = (OO[n]*SS[n]*NN[n]);
    cout << ans;
}
