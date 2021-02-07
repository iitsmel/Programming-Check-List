# include <vector>
# include <algorithm>
using std::vector;
using std::swap;

class Solution {
public:
    int maximumSwap(int num) {
        vector<int> process;
        int ans = 0;
        int temp = 0;
        int maxnum = -1;
        int maxindex = -1;
        int max = -1;
        int swaphead = -1;
        int swaptoe = -1;
        
        for (int i = num; i > 0; i /= 10) {
            temp = i % 10;
            process.push_back(temp);
            if (temp > max) {
                max = temp;
                maxindex = process.size() - 1;
            }

            if (max > temp) {
                swaphead = process.size() - 1;
                swaptoe = maxindex;
            }
        }
        
        if(swaphead == -1)
            return num;
        
        swap(process[swaphead], process[swaptoe]);
        for(int i = process.size() - 1 ; i >= 0 ; i--)
            ans = ans * 10 + process[i];
        
        return ans;
    }
};
