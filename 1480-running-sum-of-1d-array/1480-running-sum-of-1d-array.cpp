class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       vector<int> sum(nums.size());
       int p=0;
         for(int i=0; i<nums.size(); i++){           
            sum[i]= nums[i] + p;
              p=  sum[i];  
         } return sum;
    }    
};