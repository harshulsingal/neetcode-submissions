class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int num:nums){
            sum+=num;
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        vector<bool> dp(sum+1,false);
        dp[0]=true;
        for(int x:nums){
            for(int i=sum;i>=x;i--){
                dp[i]=dp[i]|dp[i-x];
            }
        }
        return dp[target];
    }
};
