#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        string s, t;
        cin >> s >> t;

        vector<int> cnt(26, 0);

        for (char c : t)
            cnt[c - 'a']++;

        // subtract s
        bool possible = true;
        for (char c : s) {
            cnt[c - 'a']--;
            if (cnt[c - 'a'] < 0)
                possible = false;
        }

        if (!possible) {
            cout << "Impossible\n";
            continue;
        }

        string before = "", after = "";
        char first = s[0];

        for (char c = 'a'; c <= 'z'; c++) {
            if (c < first)
                before += string(cnt[c - 'a'], c);
            else if (c > first)
                after += string(cnt[c - 'a'], c);
        }

        string equal(cnt[first - 'a'], first);

        string option1 = before + equal + s + after;
        string option2 = before + s + equal + after;

        cout << min(option1, option2) << "\n";
    }
}