#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
void merge(vector<int>&arr, int l, int mid, int r){
    int i = 0, j = 0, k = l;
    while(i < )
}
void merge_sort(vector<int>&arr, int l, int r){
    if(l>=r) return;
    int mid = (l+r)/2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid+1, r);
    merge(arr, l, mid, r);
}
int main(){
    sort
}
