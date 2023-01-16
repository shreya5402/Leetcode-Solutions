class Solution {
public:
    bool isPalindrome(int x) {
      long long int temp=x;
      long long int ld=0,rev=0;
        while(x>0)
        {
            ld=x%10;
            rev=((10*rev)+ld);
            x/=10;
        }
        if(rev==temp)
            return true;
        else
            return false;
    }
};
