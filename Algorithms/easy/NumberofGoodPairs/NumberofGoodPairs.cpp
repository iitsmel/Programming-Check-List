# include <iostream>
# include <vector>
using std::vector;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        for(int i = 0 ; nums.size() > i ; i++) {
            for( int j = 0 ; nums.size() > j ; j++){
                if(j > i){
                    if(nums[i] == nums[j]){
                        ans++;
                    }
                }
            }
        }
        
        return ans;
    }
};
