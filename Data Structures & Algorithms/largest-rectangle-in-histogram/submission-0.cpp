class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>nge(n,n);
        vector<int>pge(n,-1);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();

            }
            if(!st.empty()){
                pge[i]=st.top();
            }
            st.push(i);
        }
        stack<int>st1;
        for(int i=n-1;i>=0;i--){
            while(!st1.empty() && heights[st1.top()]>=heights[i]){
                st1.pop();
            }
            if(!st1.empty()){
                nge[i]=st1.top();
            }
            st1.push(i);
        }
         int ans = 0;
         for(int i=0;i<n;i++){
            int k = (nge[i]-pge[i]-1)*heights[i];
            ans = max(ans,k);
         }
        return ans;
    }
};
