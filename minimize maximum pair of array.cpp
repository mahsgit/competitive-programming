class Solution {
public:
    int minPairSum(vector<int>& nums) {
      int maxi=0; int n=nums.size(); int i=0; int j=n-1;
      sort(nums.begin(),nums.end());
       for(;i<j;i++,j--)
        maxi = max(maxi, nums[i]+nums[j]);
        return maxi;
    }

};
