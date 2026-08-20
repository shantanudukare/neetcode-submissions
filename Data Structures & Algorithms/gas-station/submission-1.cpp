class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0,sum2=0;
        int n=gas.size();
        for(int i=0;i<n;i++){
              sum1+=gas[i];
              sum2+=cost[i];
              gas[i]=sum1-sum2;
        }
        if(sum1<sum2)return -1;
        int start =-1;
        int k = INT_MAX;
       for(int i=0;i<n;i++){
           if(gas[i]<k){
            start = i;
            k=gas[i];
           }
       }
        start = (start+1)%n;
        return start;
    }
};
