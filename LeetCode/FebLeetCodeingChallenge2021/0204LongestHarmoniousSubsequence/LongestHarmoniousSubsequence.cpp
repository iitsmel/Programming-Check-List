# include <vector>
# include <unordered_map>
using std::vector;
using std::unordered_map;
using std::max;

class Solution {
public:
    int findLHS(vector<int>& nums) {        
        unordered_map<int,int> hash;
        int ans = 0;

        for (int i:n nums) {
            hash[i]++;
            if (hash.find(i+1) != hash.end())
                ans = max(ans, hash[i]+hash[i+1]);
            if (hash.find(i-1)!= hash.end())
                ans = max(ans, hash[i]+hash[i-1]);
        }

        return ans;
    }
};