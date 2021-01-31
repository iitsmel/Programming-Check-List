# include <vector>
using std::vector;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i = 0 ; index.size() > i ; i++) {
            ans.insert(ans.begin()+index[i],nums[i]);
            // it's insert so the value can be inserted in certain position(index)
        }
        
        return ans;
    }
};
