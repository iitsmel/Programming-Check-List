# include <unordered_map>
# include <string>
using std::string;
using std::unordered_map;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) 
            return false;

		unordered_map <char, int> ans;

        for (char temp: s) 
            ans[temp]++;

        for(char temp: t) {
            ans[temp]--;
            if (0 > ans[temp]) 
                return false;
        }

        return true;     
    }
};
