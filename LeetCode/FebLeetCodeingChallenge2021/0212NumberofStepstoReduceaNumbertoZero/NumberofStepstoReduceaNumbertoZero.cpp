class Solution {
public:
    int numberOfSteps (int num) {
        long long int ans = 0;
        
        while(num > 0) {
            if(num % 2 != 0)
                num--;
            else
                num = num/2;
            
            ans++;
        }
        
        return ans;
    }
};
