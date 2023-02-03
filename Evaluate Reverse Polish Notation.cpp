class Solution {
public:
    int evalRPN(vector<string>& tokens) {
            stack <int> z;
        for(int i=0;i<tokens.size();i++)
        {  if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="/" && tokens[i]!="*")
            {
            int d;
            d=stoi(tokens[i]);
                z.push(d);
            }
            else
            {
                if(tokens[i]=="+")
                {
                    long long int x,y;
                    x=z.top();
                    z.pop();
                    y=z.top();
                    z.pop();
                    z.push(x+y);
                }
                 if(tokens[i]=="*")
                {
                   long long int x,y;
                    x=z.top();
                    z.pop();
                    y=z.top();
                    z.pop();
                    z.push(x*y);
                }
                else if(tokens[i]=="/")
                {
                    long long int x,y;
                    x=z.top();
                    z.pop();
                    y=z.top();
                    z.pop();
                    z.push(y/x);
                }
                else if(tokens[i]=="-")
                {
                    long long int x,y;
                    x=z.top();
                    z.pop();
                    y=z.top();
                    z.pop();
                    z.push(y-x);
                }
                                       }
        }
            
        return z.top();
    }
};
