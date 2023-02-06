class Solution {
public:
    int lengthOfLongestSubstring(string s) {
             unordered_map<char,int>map;
     int maxi=INT_MIN;
     int i=0;
     int j=0;
     if(s.size() == 0) return 0;
     while(j<s.size()){
      map[s[j]]++;
         j++;
         maxi=max(maxi,j-i);
       if(map.find(s[j]) != map.end()){
           cout<<maxi<<" ";
         while(map[s[j]] == 1){
             map[s[i]]--;
             i++;
             if(map[s[i]] == 0) map.erase(s[i]);
         }
       }
     }
return maxi;
    }
};
