class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        int i = 0;
        int j = 0;
        while(i < m && j < n){
            if(nums1[i] >= nums2[j]) {res.push_back(nums2[j++]); continue;}
            if(nums1[i] < nums2[j]) {res.push_back(nums1[i++]); continue;}
        }
        while(j < n){
            res.push_back(nums2[j++]);
        }
        while(i < m){
            res.push_back(nums1[i++]);
        }
        nums1 = res;
    }
};