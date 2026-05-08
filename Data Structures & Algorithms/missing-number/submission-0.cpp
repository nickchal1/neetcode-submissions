class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l = nums.size();
        int sum = (l*(l+1))/2;
        int missing_sum = 0;   

        for(int i=0;i<l;i++){
            missing_sum += nums[i];
        }
        return sum - missing_sum;
    }
};
