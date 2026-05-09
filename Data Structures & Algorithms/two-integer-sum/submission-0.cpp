class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ma;
        
        for (int i = 0; i < nums.size(); i++) {
            int want = target - nums[i];
            if (ma.find(want) != ma.end()) {
                return {ma[want], i};
            }
            ma[nums[i]]+=i;
        }
        return {};
    }
};
