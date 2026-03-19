#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using v = vector<long long>;
using p = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
void bismilah(){ ios::sync_with_stdio(false); cin.tie(nullptr); } 

void solve(){
}

int go(int N) { 
    int s = 0; 
    int f = 1; 
    for (int i = 2; i <= N; i++) { 
        if (N % i == 0) { 
            if (i - f > s) {
                cout << i - f << '\n';
                s = i - f; 
            }
            f = i; 
        } 
    } 
    return s; 
}

bool dua_mata(vector<int> A, int kiri, int kanan) { 
if (kiri == kanan) { 
return (A[kiri] == 0); 
} else { 
int mid = (kiri + kanan) / 2; 
if (A[mid] < 0) { 
return dua_mata(A,kiri,mid-1); 
} else if (A[mid] > 0) { 
return dua_mata(A,mid+1,kanan); 
} else { 
    cout << "Not possible, its on mid!" << endl;
return false; 
} 
} 
}

int main() {
    bismilah();
    
    int t = 1;
    cout <<dua_mata({4,3,2,1,0,-1,-2}, 0, 6) ;

    return 0;
}

