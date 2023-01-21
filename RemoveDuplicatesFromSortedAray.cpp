//naive solution is using a hash set. Iterate for every element and duplicate elements will not be inserted into the set.
//w.k.t hash set stores elements in ascending order so we have to ensure that they're stored in the front.
//time complexity of this brute force algo:- O(N log N) where N for traversing in the array and log N for inserting into the set + O(N) for placing elements fo set in teh array. 
//space complexity = O(N)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() ==0)
            return 0;
        int i=0;
        for(int j=1; j< nums.size(); j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i]= nums[j];            }
        }
        return i+1;   
    }
};
