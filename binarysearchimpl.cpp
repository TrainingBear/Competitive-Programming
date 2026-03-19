#include <bits/stdc++.h>
using namespace std;
int search(vector<int> arr, int target){
    int l = 0, r = (arr.size())-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]==target) return mid;
        if(target < arr[mid]){
            r = mid-1;
        }
        if(target > mid){
            l = mid+1;
        }
    }
    return -1;
}
void solve(){
    int x; cin >> x;
    vector<int> arr = {2, 2, 3, 4,  6, 8, 9, 7, 9, 10};
    cout << search(arr, x) << '\n';
}

int main(){
    int t; cin >> t; while(t--)
    solve();
}

