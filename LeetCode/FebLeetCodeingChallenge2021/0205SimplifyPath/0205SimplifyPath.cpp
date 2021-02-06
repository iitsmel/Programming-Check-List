# include <string>
# include <stack>
using std::string;
using std::stack;

class Solution {
public:
    string simplifyPath(string path) {
        int size = path.size();
        stack<string> process;
        string ans = "";
        string temp = "";
        
        for(int i = 0 ; size > i ; i++) {
            if (path[i] == '/') 
                continue;
            temp = "";

            while(size > i && path[i]!='/') {
                temp += path[i];
                i++;
            }

            i--;                     
            if(temp == ".")
                continue;  
            
            if(temp == "..") {
                if(!process.empty())
                    process.pop();
                continue;
            }
            
            process.push(temp);
        }
        
        if(process.empty())
            return "/";
        
        while(!process.empty()) {
            ans = "/" + process.top() + ans;
            process.pop();
        }
        
        return ans;
    }
};
