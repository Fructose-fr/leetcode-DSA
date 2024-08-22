class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffle(nums.size());
        int j=0;
        int k=n;
        for(int i=0; i<nums.size(); i+=2){
            shuffle[i] = nums[j++];
            shuffle[i+1] = nums[k++];
        }return shuffle;
    }
};