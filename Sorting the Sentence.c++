class Solution {
public:
    string sortSentence(string s) {
        vector<string> a(10);
        for(int i=0; i<s.size(); i++){ 
            string store; 
            while(!isdigit(s[i])){ 
                store.push_back(s[i]);
                i++;
            }
            a[s[i]-'0'] = store;
            i = i+1; 
        }
        string answer; 
        for(int i=1; i<10; i++){
            if(a[i].length()>0){
                answer+=a[i];
                answer.push_back(' '); 
            }
        }
        answer.pop_back();
        return answer;  
    }
    
};
