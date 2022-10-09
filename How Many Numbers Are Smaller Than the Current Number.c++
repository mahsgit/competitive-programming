class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      vector<int> a;
       int count[101] = {0, 0, 0} ;
       
		int len = nums.size();
        for(int i = 0; i < len; i++) {
            count[nums[i]]++;
        }
        for(int i = 1; i < 100; i++) {
            count[i] += count[i - 1];
        }
        for(int i = 0; i < len; i++) {
            if(nums[i] == 0)
                a.push_back(0);
            else
                a.push_back(count[nums[i] - 1]);
                
        }
        return a;
      
    }
};
