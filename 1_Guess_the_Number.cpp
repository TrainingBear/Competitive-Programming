#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l = 1, r = 1e6;
    while(l!=r){
        int mid = (l+r+1)/2;
        cout << mid << '\n';
        cout.flush();

        string res;
        cin >> res;
        if(res=="<"){
            r = mid-1;
        } else l = mid;
    }
    cout << "! "<< r << '\n';
    cout.flush();
}