# include <vector>
using std::vector;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        
        for(int i = 0 ; nums.size() > i ; i+=2) {
            for(int j = nums.at(i) ; j > 0 ; j--) {
                ans.push_back(nums.at(i+1));
            }
        }
        
        return ans;
    }
};
