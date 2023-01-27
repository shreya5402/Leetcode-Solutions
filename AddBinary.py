class Solution:
    def addBinary(self, a: str, b: str) -> str:
        #int(a,2) a represents str, 2 represents base
        return str(bin(int(a,2)+int(b,2)))[2::]  # first two elements of the binary is always 0b
 
