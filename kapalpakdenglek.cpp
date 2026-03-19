#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve(){
}

int main() {
    fast;
    
    int n;
    cin >> n;
    int arr[n];
    int min = 0;
    for (int i = 0; i < n; i++) cin >> arr[i];
    int current = 1;
    if(arr[0]!=1) min++;
    for (int i = 0; i < n-1; i++) {
        int next = arr[i+1];
        if(next == 1){
            current = 1;
        }
        else if(next-current == 1) current++;
        else if(current!=next) min++;
        else min++;
    }
    cout << min;
    return 0;
}

