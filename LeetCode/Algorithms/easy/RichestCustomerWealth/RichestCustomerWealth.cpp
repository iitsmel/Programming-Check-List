# include <vector>
using std::vector;
using std::max;

class Solution {
public:
    int maximumWealth(vector<vector<int> >& accounts) {
        int ans = 0;
        int temp = 0;
        for( int i = 0 ; accounts.size() > i ; i++ ) {
            for( int j = 0 ; accounts[i].size() > j ; j++ ) {
                temp += accounts[i][j];
            }
            ans = max(ans, temp);
            temp = 0 ;
        }
        return ans;
    }
};
