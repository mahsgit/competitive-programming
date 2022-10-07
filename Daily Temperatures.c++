class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        if (temperatures.empty())
        {
            return vector<int>();
        }
        
        stack<pair<int, int>> s;
        s.push(make_pair(temperatures.back(), 0));
        
        vector<int> ans(temperatures.size(), 0);
        for (int i = temperatures.size() - 2; i >= 0; i--)
        {
            int counter = 1;
        
            while (!s.empty() && temperatures[i] >= s.top().first)
            {
                counter += s.top().second;
                s.pop();
            }
            if (s.empty())
            {
                s.push(make_pair(temperatures[i], 0));
            }
            else
            {
                s.push(make_pair(temperatures[i], counter));
                ans[i] = counter;
            }
        }
        
        return ans;
    }
};
