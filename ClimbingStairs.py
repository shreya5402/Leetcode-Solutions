#caching the result i.e memoization. We use bottom up DP. Can solve it using DFS.
#storing result in an array called dp. We find out that at the last array and second last array always one is going to be stored because there is no other step that can be taken.
#for ex if the value is 5. after the 5th step no step can be taken so only one solution and if 4 out of 5 steps have been reached only 1 more step can be taken and nothing else.
#for all the values before 5 we just have to keep adding the next 2 values. ex for 3 we add 1+1 as step 4 and step 5 and similarly for 2 we add 2+1+ i.e 3rd and 4th step.
#we return the one variable as it moves to the first spot of the array .
class Solution:
    def climbStairs(self, n: int) -> int:
        one, two = 1, 1

        for i in range(n-1):
            temp = one
            one = two + one
            two = temp
        return one
