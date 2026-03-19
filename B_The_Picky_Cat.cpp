#include <bits/stdc++.h>
using namespace std;

int t, n; 
const int MAXN = 1e5+5;
int arr[MAXN];

void solve(){
    cin >> n;
    int first = 0;
    int l = 0;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        if(i==0) first = arr[0];
        else if(first < arr[i]) l++;
    }
    sort(arr, arr+n);
}