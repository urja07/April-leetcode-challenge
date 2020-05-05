class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current,global;
        current=global=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            current=max(nums[i],current+nums[i]);
            if(current>global)
                global=current;
        }
        return global;
    }
};
