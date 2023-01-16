//Brute force approach using O(N^2) Complexity:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if((nums[i]+nums[j])==target)
                      return {i,j};
            }
        }
        return {};
    }
};
