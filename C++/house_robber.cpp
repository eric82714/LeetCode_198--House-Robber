class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        int loot = nums[0], prev = 0;
        
        for(int i = 1; i < nums.size(); i++) {
            int tmp = loot;
            loot = max(nums[i] + prev, loot);
            prev  = tmp;
        }
            
        return loot;
    }
};
