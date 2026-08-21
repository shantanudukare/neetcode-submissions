class Solution {
   public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n<=1)return s;
        int ans = 1;
        string s1=s.substr(0, 1);

        for (int i = 0; i < n; i++) {
            int r = i;
            int l = i;
            
            while (l >= 0 && r < n && s[l]==s[r]) {
              if(ans<r-l+1){
                ans = r-l+1;
                s1=s.substr(l,r-l+1);
              }
              l--;
              r++;
            }
        }
       for(int i=1;i<n;i++){
        int l=i-1;
        int r=i;
           while (l >= 0 && r < n && s[l] == s[r]) {

                if (ans < r - l + 1) {
                    ans = r - l + 1;
                    s1 = s.substr(l, r - l + 1);
                }

                l--;
                r++;
            }
       }
        return s1;
    }
};
