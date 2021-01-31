# include <vector>
using std::vector;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int x = 0;
        int y = nums.size() / 2;
        
        while(nums.size() > y) {
            ans.push_back(nums.at(x));
            x++;
            ans.push_back(nums.at(y));
            y++;
        }
        
        return ans;
    }
};
