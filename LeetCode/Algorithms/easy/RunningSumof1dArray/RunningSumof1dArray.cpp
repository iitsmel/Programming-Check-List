# include <vector>
using std::vector;

class Solution {
public:
    vector<int> runningSum(vector<int>& input) {
        vector<int> ans;
        ans.push_back(input[0]);
        for (int i = 1 ; input.size() > i ; i++) {
            ans.push_back(ans.back() + input[i]);
        }
        return ans;
    }
};
