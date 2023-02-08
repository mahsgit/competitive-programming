class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){b++;}
            else if(nums[i]==1){a++;}
            else {c++;}

        }
        nums.clear();
        for(int i=0;i<b;i++){nums.emplace_back(0);}
        for(int i=0;i<a;i++){nums.emplace_back(1);}
        for(int i=0;i<c;i++){nums.emplace_back(2);}
        
    
    }
};
