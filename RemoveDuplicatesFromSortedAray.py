class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        l=1 #left pointer equal to index 1
        #right pointer itirating through every value in the array starting at 1 
        for r in range(1,len(nums)):
            if nums[r] !=nums[r-1]: #comparing value r with the previous value to check for duplicates
                nums[l] = nums[r] #putting unique values from index r to index l i.e. left index
                l += 1 #incrementing lef pointer everytime we find unique value and put it in the left pointer.
        #no need to increment r as the for loop is incrementing r 
        return l
