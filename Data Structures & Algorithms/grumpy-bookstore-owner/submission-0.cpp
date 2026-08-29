class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int maxExtra=-1;
        int extra=0;
        int sum=0;
        int n=customers.size();
        int k=minutes;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                sum+=customers[i];
            }
        }
        for(int i=0;i<k;i++){
            if(grumpy[i]==1){
                extra+=customers[i];
            }
        }
        maxExtra=max(extra,maxExtra);
        for(int i=k;i<n;i++){
            if(grumpy[i]==1){
                extra+=customers[i];
            }
            if(grumpy[i-k]==1){
                extra-=customers[i-k];
            }
            maxExtra=max(extra,maxExtra);
        }
        return sum+maxExtra;
    }
};