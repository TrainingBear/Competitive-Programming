#include <bits/stdc++.h>
using namespace std;
int dp(string op, int m){
    if(m==0){
        if(op=="AND") return 3;
        if(op=="OR") return 1;
        if(op=="XOR") return 1;
    }
    else{
        if(op=="AND") return 1;
        if(op=="OR") return 3;
        if(op=="XOR") return 2;
    }
}

int main(){
    int n, m; cin >>> n >> m;
    string arr[n];
    long long int ans = 0;
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    for(int i = n-1; i >= 0; i--){
        dp(arr[i], m)
    }
}
