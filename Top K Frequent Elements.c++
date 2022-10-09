class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for (int num : nums)
            m[num]++;
        
        vector<vector<int>>order(nums.size() + 1); 
        for (auto a : m)
            order[a.second].push_back(a.first);
        
        vector<int> answer;
        for (int i = order.size() - 1; i >= 0 && answer.size() < k; --i) {
            for (int num : order[i]) {
                answer.push_back(num);
                if (answer.size() == k)
                    break;
            }
        }
        return answer;
        
    }
};
