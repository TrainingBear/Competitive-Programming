#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, x; 
    cin >> t;
    string s;
    deque<int> data;
    while(t--) {
         cin >> s;
         if(s=="push_back") {
            cin >> x;
            data.push_back(x);
         }
         if(s=="push_front") {
            cin >> x;
            data.push_front(x);
         }
         if(s=="pop_back") data.pop_back();
         if(s=="pop_front") data.pop_front();
    }
    for(auto&a:data) cout << a << '\n';
}