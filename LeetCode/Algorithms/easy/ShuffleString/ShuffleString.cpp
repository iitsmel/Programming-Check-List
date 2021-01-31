# include <vector>
# include <string>
using std::vector;
using std::string;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;
        
        for(int i = 0 ; indices.size() > i ; i++) {
            ans[indices.at(i)] = s[i];
        }
        
        return ans;
    }
};