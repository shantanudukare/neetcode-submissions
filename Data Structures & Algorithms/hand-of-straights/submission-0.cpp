class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        sort(hand.begin(),hand.end());
        if(n%groupSize!=0)return false;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[hand[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[hand[i]]==0)continue;
            int j = 0;
            while(j<groupSize){
                if(mp[hand[i]+j]==0)return false;
                mp[hand[i]+j]--;
                j++;
            }
        }
        return true;
    }
};
