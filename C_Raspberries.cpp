#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+5;
int n, k, a[MAXN];

void solve(){
    cin >> n >> k;
    for(int i = 0 ; i < n; i++) cin >> a[i];
    int ans = 0;
    int mn = -1;
    sort(a, a+n);
    if(k!=4){
        for(int i = 0; i < n; i++){
            if(a[i]%k==0) break;
            if(mn==-1||a[mn]%k<a[i]%k) mn = i;
        }
        if(mn!=-1) ans = k-(a[mn]%k);
    } else {
        int cnt = 0;
        for(int i = 0 ; i < n; i++){
            if(a[i]==3){
                cnt = 1;
                break;
            }
            if(i+1 < n && (a[i]*a[i+1])%k==0){
                cnt = 2;
                break;
            }
            if(!(a[i]&1)) cnt++;
        }
        ans = max(0, 2-cnt);
    }
    cout << ans << '\n';
}

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int r=0,r4=0;
		while(n--){
			int x;cin>>x;
			if(k==4)r4+=x%2==0 && r4<2?1:0;
			r=x%k==0?k:max(r,x%k);
		}
		cout<<(k==4?2-r4<k-r?2-r4:k-r:k-r)<<endl;
	}
}