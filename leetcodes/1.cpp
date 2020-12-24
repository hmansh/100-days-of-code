class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count = 0;
        for(int a : nums){
            if (a == 1){
                count++;
                if(count > max){
                    max = count;
                }
            } if (a == 0){
                count = 0;
            }
        }
        return max;
    }
};