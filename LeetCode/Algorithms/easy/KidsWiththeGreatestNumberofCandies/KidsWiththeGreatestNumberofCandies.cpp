# include <vector>
using std::vector;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> candiesWithExtra;
        vector<bool> ans;
        int max = *max_element(candies.begin(), candies.end());
        
        for( int i = 0 ; candies.size() > i ; i++ )
            candiesWithExtra.push_back(candies.at(i) + extraCandies);
        
        for( int i = 0 ; candiesWithExtra.size() > i ; i++ ) {
            if(candiesWithExtra.at(i) >= max)
                ans.push_back(true);
            else 
                ans.push_back(false);
        }
        
        return ans;
    }
};
