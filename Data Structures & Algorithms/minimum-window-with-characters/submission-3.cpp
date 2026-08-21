class Solution {
public:
    string minWindow(string s, string t) {
        string ans = "";
        if(t.size() > s.size())return ans;
        int i =0;
        int j = 0;
        map<char,int> mp;
        int count = 0;
        for(auto chr : t){
            mp[chr]++;
            count++;
        }
        int ansi=0;
        int ansj=0;
        int mn = INT_MAX;
        
        // cout<<i<<" "<<j;
        while(j<s.size()){
            while(j<s.size() && count!=0 ){
                if(mp.find(s[j])!=mp.end()){
                    if(mp[s[j]]>0)count--;
                    mp[s[j]]--;
                }
                j++;
            }
            while(i<s.size() && count == 0 ){
                if(mp.find(s[i]) != mp.end()){
                    if(mp[s[i]]>=0){
                        count++;
                    }
                    mp[s[i]]++;
                }
                if(j-i+1 < mn){
                    ansi=i;
                    ansj=j-1;
                    mn = j-i+1;
                }
                i++;
            }
            // j++;
        }
        if(mn == INT_MAX) return "";
        for(int i = ansi ; i<= ansj ;i++){
            ans+=s[i];
        }
        return ans;
    }
};
