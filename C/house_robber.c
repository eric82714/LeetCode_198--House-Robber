int rob(int* nums, int numsSize){
    if(numsSize == 0) return 0;
        
    int loot = nums[0], prev = 0;
        
    for(int i = 1; i < numsSize; i++) {
        int tmp = loot;
        loot = fmax(nums[i] + prev, loot);
        prev  = tmp;
    }
            
    return loot;
}
