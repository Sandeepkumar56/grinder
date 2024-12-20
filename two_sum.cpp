#include<vector>
use namesp std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int req = target - nums[i];
            if (mp.find(req) != mp.end()) {
                return {i, mp[req]};
            }
            mp[nums[i]] = i;
        }

        return {}; // No solution found
    }
};