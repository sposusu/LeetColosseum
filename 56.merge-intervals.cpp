#include<vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>::iterator begin = intervals.begin();
        vector<vector<int>>::iterator end = intervals.end();
        sort(begin, end);
        begin = intervals.begin();
        end = intervals.end();
        vector<vector<int>>::iterator it;
        vector<vector<int>>::iterator last = it;
        vector<vector<int>> ans;
        int head = 0;
        int tail = 0;
        for(it=begin ; it!=end ; it++){
            if((*it)[0] <= (*last)[1]){

            }else{
                ans.append
            }
        }
        return intervals;
    }
};
