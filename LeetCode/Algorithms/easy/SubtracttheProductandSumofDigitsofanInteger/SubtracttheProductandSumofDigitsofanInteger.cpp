class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans = 0;
        int process = 1;
        int temp = 0;
        
        while(n != 0) {
            temp = n % 10;
            process *= temp;
            ans += temp;
            n /= 10;
        }
        
        ans = process - ans;
        return ans;
    }
};
