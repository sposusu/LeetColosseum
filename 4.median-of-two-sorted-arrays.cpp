class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>::iterator begin1 = nums1.begin();
        vector<int>::iterator end1 = nums1.end();
        vector<int>::iterator begin2 = nums2.begin();
        vector<int>::iterator end2 = nums2.end();

        vector<int>::iterator it1 = begin1;
        vector<int>::iterator it2 = begin2;
        int total_length = nums1.size() + nums2.size();
        int count = 0;
        int last = 0;
        double median;
        
        while((double)count < (double)total_length/2){
            count++;
            if(it1==end1){
                last = *it2;
                it2++;
            }else if(it2 ==end2){
                last = *it1;
                it1++;
            }else{
                if(*it1>*it2){
                    last = *it2;
                    it2++;
                }else{
                    last = *it1;
                    it1++;
                }
            }
        }

        if(total_length%2 ==0){
            if(it1==end1){
                last += *it2;
                it2++;
            }else if(it2 ==end2){
                last += *it1;
                it1++;
            }else{
                if(*it1>*it2){
                    last += *it2;
                    it2++;
                }else{
                    last += *it1;
                    it1++;
                }
            }
            median =  (double)last/2;
        }else{
            median = double(last);
        }
        return median;
    }
    
};