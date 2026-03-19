#include <bits/stdc++.h>
#include <iterator>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
using ve = vector<long long>;
using pair = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
void bismilah(){ ios::sync_with_stdio(false); cin.tie(nullptr); } void yes(){ cout << "YES\n"; } void no(){ cout << "NO\n"; }

int find(vector<int> arr, int x){
    if(x==-1) return -1;
    if(arr[x] == x) return x;
    return find(arr, arr[x]-1);
    }

int solve(vector<vector<int>> &isConnected){
    int connected = 0;
    vector<vector<int>> arr = isConnected;
    vector<int> root(arr.size(), -1);
    for (int i = 0; i < arr.size(); i++) 
        for (int j = 0; j < arr[i].size(); j++) 
            if(*arr[i][j] && root[i]==-1) root[i] = j;
    for (int i = 0; i < root.size(); i++) {
    }
    for(int i : root) cout << i << " ";
    return 0;
}


int main() {
    bismilah();
    
    int t = 1;
    vector<vector<int>> roots = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
    solve(roots);
    return 0;
}

