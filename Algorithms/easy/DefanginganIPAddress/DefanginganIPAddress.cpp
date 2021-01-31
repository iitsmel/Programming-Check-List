# include <iostream>
using std::string;

class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        
        for(int i = 0 ; address.size() > i ; i++){
            if(address[i] != '.')
                ans += address[i];
            else
                ans += "[.]";
        }
        
        return ans;
    }
};
