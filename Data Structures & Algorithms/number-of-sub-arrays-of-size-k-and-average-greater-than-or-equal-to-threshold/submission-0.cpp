class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int minSum=k*threshold;
        int n=arr.size();
        int cnt=0;
        int sum=accumulate(arr.begin(),arr.begin()+k,0);
        if(sum>=minSum){
            cnt++;
        }
        for(int i=k;i<n;i++){
            sum+=arr[i]-arr[i-k];
            if(sum>=minSum){
                cnt++;
            }
        }
        return cnt;
    }
};