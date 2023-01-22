class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        return len(s.split()[-1])
    
    
#Another way of doing it:-
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        return len(s.strip().split()[-1])
    
#s.strip() is used to remove the whitespaces from the string and split() is used to turn the string into a list where each word will be a list item.
