class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>mp;
        while(true){
            long long sum =0;
            while(n>0){
                int k = n % 10;
                n=n/10;
                sum += k*k;
            }
            if(sum==1)return true;
            if(mp.find(sum)!=mp.end()){
                return false;
            }
            mp[sum]++;
            n= sum ;
        }
        return false;
    }
};
