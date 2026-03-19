#include <bits/stdc++.h>
using namespace std;
#define ll long long
pair<ll, ll> g = {0, 0};
void merge(vector<ll>&arr, ll l, ll mid, ll r){
    vector<ll> left(arr.begin()+l, arr.begin()+mid+1);
    vector<ll> right(arr.begin()+mid+1, arr.begin()+r+1);
    ll i =0, j = 0;
    while(i<left.size() && j < right.size()){
        if(g.first <= g.second){
            if(left[i] <= right[j]){
                g.first = right[j];
                j++;
            } else {
                g.first = left[i];
                i++;
            }
        } else {
            if(left[i] <= right[j]){
                g.second = right[j];
                j++;
            }else {
                g.second = left[i];
                i++;
            }
        }
    }
    while(i < left.size()){
        if(g.first <= g.second){
            g.first = left[i];
        } else {
            g.second = left[i];
        }
        i++;
    }
    while(j < right.size()){
        if(g.first <= g.second){
            g.first = right[j];
        } else {
            g.second = right[j];
        }
        j++;
    }
}
void merge_sort(vector<ll>&arr, ll l, ll r){
    if(l>=r) return;
    ll mid = (l+r)/2;
    merge_sort(arr, l, mid);
    merge_sort(arr, r+1, mid);
    merge(arr, l, mid, r);
}
int main(){
    ll n; cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    merge_sort(arr, 0, n);
    cout << abs(g.first-g.second) << '\n';
    cout << g.first << " " << g.second;
}
