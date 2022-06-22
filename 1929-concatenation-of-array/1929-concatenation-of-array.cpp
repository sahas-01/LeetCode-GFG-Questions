class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
           ans.push_back(nums[i]); 
        }
        for(int i=0;i<ans.size();i++){
            nums.push_back(ans[i]);
        }
        
        return nums;
    }
};