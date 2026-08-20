class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        map<char,int>mp;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[r])==mp.end()){
                ans=max(ans,r-l+1);
                mp[s[r]]++;
                r++;
            }else{
                while(s[l]!=s[r]){
                    mp[s[l]]--;
                if(mp[s[l]]==0)mp.erase(s[l]);
                l++;
                }
               
                l++;
                r++;
            }
        }
        return ans;
    }
};
