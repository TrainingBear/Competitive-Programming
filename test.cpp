#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
}

int main(){
    int n = 16;
    vector<int> a = {1,2,3,4,5,7,8,9,10};
    vector<int> b = {4, 5, 9};

    int target = 11;
    int l = 0;
    int r = 8;
    auto it = upper_bound(b.begin(), b.end(), 4);
    if(it==b.end()) cout << "DOESNT EXIST!";
    else {
        cout << *it << '\n';
        cout << it-b.begin() << '\n';
        *it = 10;
        cout << *it << '\n';
        cout << b[it-b.begin()] << '\n';
    }
}