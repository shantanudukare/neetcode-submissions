class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.size()-1;
        string s1;
        for(int i=0;i<r+1;i++){
            if(isalnum(s[i])){
                s1.push_back(tolower(s[i]));
            }
        }
        l=0,r=s1.size()-1;
        while(l<r){
            if(s1[l]!=s1[r])return false;
            l++;r--;
        }
        return true;
    }
};
