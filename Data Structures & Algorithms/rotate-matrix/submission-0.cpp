class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                 swap(matrix[i][j],matrix[j][i]);
            }
        }
        //   for(auto &row : matrix){
        //     reverse(row.begin(),row.end());
        //   }

        for(int j=0;j<n;j++){
            int l =0 , r= n-1;
            while(l<r){
                swap(matrix[j][l],matrix[j][r]);
                l++;
                r--;
            }
        }
        
    }
};
