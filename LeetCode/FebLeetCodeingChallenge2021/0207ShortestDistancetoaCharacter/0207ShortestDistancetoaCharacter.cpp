# include <vector>
# include <string>
using std::vector;
using std::string;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {        
        vector<int> ans;
        vector<int> index; // the index of c in s
        int process = 0;
        int min = s.length();
        
        for(int i = 0 ; s.length() > i ; i++) {
            if(s[i] == c)
                index.push_back(i);
        }

        for (int i = 0; s.length() > i; i++) {
            for(int j = 0 ; index.size() > j ; j++) {
                process = index.at(j) - i;
                if(0 > process) 
                    process *= -1;
                if(process >= 0 && min >= process)
                    min = process;
            }
            
            ans.push_back(min);
            min = s.length();
        }

        return ans;
    }
};