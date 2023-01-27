class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int i = a.length()-1, j = b.length()-1;
        int carry=0;
        while(i>=0 || j>=0){
            int sum=carry;
            if(i>=0) sum+= a[i--] - '0';
            //subtract by '0' to convert the numbers from a char type into an int, so we can perform operations on the numbers.
            if(j>=0) sum+= b[j--] - '0';
            carry = sum> 1? 1:0;
            result += to_string(sum%2);
            //to_string takes a single integer variable or other data type and converts into the string.
            //we have to add 3 bits, 1 each from num1 and num2 and a carry. So, sum can take 4 values. 0, 1, 2, 3. If sum = 0 or 2, we use 0 else 1.
        }
        if(carry) result += to_string(carry);
            reverse(result.begin(), result.end());
            return result;
    }
};
