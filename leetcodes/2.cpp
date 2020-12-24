class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto a: nums){
            int digits = 0;
            while(a){
                a = int(a/10);
                digits++;
            }
            if(digits%2==0) count++;
        }
    return count;
    }
};

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int a = 0 ; a < nums.size(); a++){
            int digits = 1 + floor(log10(nums[a]));
            if(digits%2==0) count++;
        }
    return count;
    }
};
