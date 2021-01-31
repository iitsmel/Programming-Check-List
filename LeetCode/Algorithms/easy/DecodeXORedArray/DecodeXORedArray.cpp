# include <vector>
using std::vector;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        
        for(int i = 0 ; encoded.size() > i ; i++) {
            ans.push_back(encoded.at(i) ^ ans.at(i));
        }
            
        return ans;
    }
};
