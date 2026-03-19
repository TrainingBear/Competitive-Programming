#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string state = "";
        cin >> state;
        deque<int> stack;
        if(state=="add"){
            int y, x; cin >> y >> x;
            while(y--) stack.push_back(x);
            cout << stack.size() << '\n';
        }
        if(state =="del"){
            int y; cin >> y;
            cout << stack.front() << '\n';
            while(y--) stack.pop_back();
        }
        else {
        int x; cin >> x;
        for(int i = 0; i < stack.size(); i++){
            if(state=="adx") stack[i]+=x;
            else stack[i]+=x;
        }
        }
    }
}
