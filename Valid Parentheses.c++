class Solution {
public:
    bool isValid(string s) {
        stack<char> b;
        for(auto i:s) 
        {
            if(i=='(' or i=='{' or i=='[') 
                b.push(i);  
            else  
            {
                if(b.empty() or (b.top()=='(' and i!=')') or (b.top()=='{' and i!='}') or (b.top()=='[' and i!=']')) return false;
                b.pop(); 
            }
        }
        return b.empty();  
    }
};
