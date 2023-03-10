class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> lp(n);
        vector<int> fp(n);
        int prod =1;
        for(int i=0;i<n;i++){
            lp[i]=prod;
            prod=prod*nums[i];
        }
        prod=1;
        for(int i=n-1;i>=0;i--){
            fp[i]=lp[i]*prod;
            prod=prod*nums[i];
        }
        return fp;
    }
};
