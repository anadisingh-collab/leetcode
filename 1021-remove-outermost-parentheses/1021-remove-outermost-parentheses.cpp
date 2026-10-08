class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int b = 0;
        for (char c : s) {
            if (c == '(') {
                if (b > 0){
                    res += c;
                }
                b++;
            } 
            else {
                b--;
                if (b > 0)
                 res += c;
            }
        }
        return res;
    }
};