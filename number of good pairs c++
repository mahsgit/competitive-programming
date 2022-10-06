class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        
        int good_pairs[101] ={0};
        int answer=0;
        
        for(int i=0; i < nums.size(); i++){
            answer += good_pairs[nums[i]];
            ++good_pairs[nums[i]];
        }
        
        return answer;
        
    }
};
