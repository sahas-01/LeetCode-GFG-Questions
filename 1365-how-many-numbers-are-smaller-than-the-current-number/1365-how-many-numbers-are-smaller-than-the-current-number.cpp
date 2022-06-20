class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> vec1;
        
        // sort(nums.begin(), nums.end(), greater<int>());
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(j!=i){
                    if(nums[j]<nums[i]){
                        count++;
                    }
                }
            }
            vec1.push_back(count);
        }
        return vec1;
    }
};