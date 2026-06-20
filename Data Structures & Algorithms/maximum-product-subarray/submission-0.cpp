class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd=nums[0];
        int curMax=nums[0],curMin=nums[0];
        for(int i = 1; i < nums.size(); i++){
            int num = nums[i];
            if(num<0){
                swap(curMax,curMin);
            }
            curMax=max(num,num*curMax);
            curMin=min(num,num*curMin);
            maxProd=max(maxProd,curMax);
        }
        return maxProd;
    }
};
