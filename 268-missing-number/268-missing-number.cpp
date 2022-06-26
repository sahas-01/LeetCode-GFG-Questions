class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int arraySize=nums.size();
        int arraySum=0;
        int totalSum = (arraySize*(arraySize+1))/2;
        for(int i=0;i<arraySize;i++){
            arraySum+=nums[i];
        }
        return (totalSum-arraySum);
    }
};