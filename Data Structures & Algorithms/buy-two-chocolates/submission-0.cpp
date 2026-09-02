class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int first=INT_MAX;
        int second=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<first){
                second=first;
                first=prices[i];
            }else if(prices[i]<second){
                second=prices[i];
            }
        }
        int x=money-first-second;
        if(x<0){
            return money;
        }
        return x;
    }
};