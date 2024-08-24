class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nz=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                std::swap(nums[nz] , nums[i]);
                nz++  ;    }      
            }
        }
};