# include<string>
using std::string;

class Solution {
public:
    string interpret(string command) {
        string ans = "";
        
        for(int i = 0 ; command.length() > i ; i++) {
            if(command[i] == 'G')
                ans += "G";
            if(command[i] == '(') {
                if(command[i+1] == ')') {
                    ans += "o";
                    i++;
                }
                if(command[i+1] == 'a' && command[i+2] == 'l') {
                    ans += "al";
                }
            }
        }
        
        return ans;
    }
};
