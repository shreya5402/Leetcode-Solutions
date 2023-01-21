class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int rem;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]== target || target<nums[i]){
                rem=i;
                break;
            }  
        }
    return rem;
    }
};
