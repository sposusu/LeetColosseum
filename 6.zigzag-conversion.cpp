#include<string>

using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        int group = (numRows - 1) * 2;
        if(numRows ==1){
            return s;
        }
        string ans = "";
        for(int level = 0; level < numRows; level++){
            int first = level;
            int second = group - level;
            for(int i = 0; i < s.length();i += group){
                int sub_len = s.length() - i <= group ? s.length() - i : group;
                if(first<sub_len){
                    ans.append(1, s[i+first]);
                }
                if(second<sub_len && second != first){
                    ans.append(1, s[i+second]);
                }
            }
        }
        return ans;
    }
};
