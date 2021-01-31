# include <vector>
using std::vector;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int count = 0;
        
        for(int i = 0 ; nums.size() > i ; i++) {
            for(int j = 0 ; nums.size() > j ; j++) {
                if(nums[i] > nums[j])
                    count++;
            }
            
            ans.push_back(count);
            count = 0;
        }
        
        return ans;
    }
};
