#include <bits/stdc++.h>
#include <utility>
using namespace std;
using ll = long long;
using v = vector<long long>;
using p = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
void bismilah(){ ios::sync_with_stdio(false); cin.tie(nullptr); } void yes(){ cout << "YES\n"; } void no(){ cout << "NO\n"; }


string longestPalindrome(string s) {
    char prev = s[0];
    int max = 0;
    pair<int, int> pal;
    for (int i = 0; i < s.length(); i++) {
        bool flag = false;
        for (int j = i+1; j < s.length(); j++) {
            if(s[i]==s[j]){
                int distance = j-i;
                if(distance > max){
                    max = distance;
                    pal = {i, j};
                }
                flag = true;
            }
        }
        if(!flag){
            max = 0;
        }
    }
    return s.substr(pal.first, pal.second-pal.first+1);
}
           
int lengthOfLongestSubstring(string s) {
    set<char> sub;
    int max = 0;
    for (int i = 0; i < s.length()-1; i++) {
        if(sub.count(i)==0) {
            sub.insert(i);
        }
        else sub.clear();
        int size = sub.size();
        if(size > max) {
            max = sub.size();
        }
    }
    return max;
}

vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            if(nums[i]+nums[j]==target) return {i, j};
        }
    }
    return {0, 0};
}

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i : nums2) nums1.push_back(i);
        sort(all(nums1));
        int len = nums1.size();
        if(len%2==1) return nums1[len];
        else {
            return ((nums1[len]+nums1[len-1])/2);
        }
    }

void solve(){
}

int main() {
    bismilah();
    
    int t = 1;
    cout << lengthOfLongestSubstring("abcabbac") ;

    return 0;
}

