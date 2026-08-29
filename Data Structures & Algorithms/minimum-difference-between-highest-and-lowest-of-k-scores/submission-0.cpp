class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        for(int low=0;low<=n-k;low++){
            diff=min(diff,nums[low+k-1]-nums[low]);
        }
        return diff;
    }
};