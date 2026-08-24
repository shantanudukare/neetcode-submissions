class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>count(26,0);
        int maxF = INT_MIN;
        int ans = 0;
        int l=0;
        for(int i=0;i<s.size();i++){
              count[s[i]-'A']++;
              maxF=max(maxF,count[s[i]-'A']);
              while(l<=i && (i-l+1-maxF>k)){
                count[s[l]-'A']--;
                l++;
              }
            ans = max(ans,i-l+1);
        }
        return ans;
    }
};
