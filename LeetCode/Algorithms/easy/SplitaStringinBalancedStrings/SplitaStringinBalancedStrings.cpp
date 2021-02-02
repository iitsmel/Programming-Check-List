# include <string>
using std::string;

class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int R = 0;
        int L = 0;
        
        for(int i = 0 ; s.length() > i ; i++) {
            if(s[i] == 'R')
                R++;
            else
                L++;
            
            if(R == L)
                ans++;
                // if add these two lines will cause longer runtime(4ms)
                // after removing these lines, runtime reduce to 0ms
                // R = 0;
                // L = 0;
        }
        
        return ans;
    }
};
