# include <string>
using std::string;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        
        for(int i = 0 ; jewels.size() > i ; i++) {
            for(int j = 0 ; stones.size() > j ; j++) {
                if(jewels.at(i) == stones.at(j))
                    ans++;
            }
        }
        
        return ans;
    }
};
