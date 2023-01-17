class Solution {
public:
    bool isValid(string s) {
        stack<char> st; //taking stack to keep tracking the order 
        for(auto i:s) //iterate over each and every elements
        {
            if(i=='(' or i=='{' or i=='[') st.push(i); //check for opening bracket and push it into the stack
            else  //check two conditions  current element matches with top of the stack and the stack must not be empty...
            {
                if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='{' and i!='}') or (st.top()=='[' and i!=']')) return false;
                st.pop();  //means we have got the right pair of brackets, so just pop it.
            }
        }
        return st.empty();  //checking stack is empty or not..
    }
};
