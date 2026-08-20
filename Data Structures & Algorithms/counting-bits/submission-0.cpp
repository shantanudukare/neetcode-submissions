class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        for(int k=0;k<=n;k++){
            int cnt =0;
            int i=k;
             while(i>0){
                if(i&1){
                    cnt++;
                    
                }
                i=i>>1;
             }
             ans[k]=cnt;
        }
        return ans;
    }
};
