# include <string>
# include <vector>
using std::string;
using std::vector;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        int temp = 0;
        int count = 0;
        vector<char> allow;
        
        for(int i = 0 ; allowed.length() > i ; i++) {
            allow.push_back(allowed[i]);
        }
        
        for(int i = 0 ; words.size() > i ; i++) {
            temp = words[i].size();
            
            for(int j = 0 ; temp > j ; j++){
                for(int k = 0 ; allow.size() > k ; k++ ) {
                    if(allow.at(k) == words[i].at(j))
                        count++;
                }
            }
            
            if(count == temp) {
                ans++;
            }
            
            count = 0;
        }
        
        return ans;
    }
};

/*
 Runtime: 208 ms, faster than 7.88% of C++ online submissions for Count the Number of Consistent Strings.
 Memory Usage: 30.2 MB, less than 92.59% of C++ online submissions for Count the Number of Consistent Strings.
 the result comes out poorly
*/

/*
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        int temp = 0;
        int count = 0;
        char allow[26];
        
        for(int i = 0 ; allowed.length() > i ; i++) {
            allow[i] = allowed[i];
        }
        
        for(int i = 0 ; words.size() > i ; i++) {
            temp = words[i].size();
            
            for(int j = 0 ; temp > j ; j++){
                for(int k = 0 ; allowed.length() > k ; k++ ) {
                    if(allowed[k] == words[i].at(j))
                        count++;
                }
            }
            
            if(count == temp) {
                ans++;
            }
            
            count = 0;
        }
        
        return ans;
    }

this one will run faster
so vector push back will cause longer time compare to array
*/