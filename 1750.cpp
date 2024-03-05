#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
class Solution {
public:
    void advance(string s, int& l, int& r) {
        if (l>=r) return;
        while (s[l+1] == s[l]) {
            ++l;
            if (l==r) {
                return;
            }
        }
    }
    void go_back(string s, int& r, int& l) {
        if (r<=l) return;
        while (s[r-1] == s[r]) {
            --r;
            if (r==l) return;
        }
    }
    int minimumLength(string s) {
        if (s.size()<=1) {
            return s.size();
        }
        int l = 0;
        int r = s.size()-1;
        while (l<r) {
            if (s[l]!=s[r]) {
                return r-l+1;
            }
            advance(s, l, r);
            go_back(s, r, l);
            --r;
            ++l;
        }
        return max(r-l+1, 0);
    }
};

int main() {
    string s;
    cin >> s;
    Solution sol;
    printf("Length of substring is %i", sol.minimumLength(s));
    return 0;
}
