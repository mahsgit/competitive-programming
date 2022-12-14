class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>> answer ;
        if(intervals.size()<=1){
            return intervals;
        }
        
        sort(intervals.begin(), intervals.end());
        answer.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++) {
            if(answer.back()[1] >= intervals[i][0])
                answer.back()[1] = max(answer.back()[1] , intervals[i][1]);
            else answer.push_back(intervals[i]); 
        }
        return answer;
    }
};
